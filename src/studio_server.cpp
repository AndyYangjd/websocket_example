#include "boost/asio.hpp"
#include "foxglove/websocket/server.hpp"
#include "nlohmann/json.hpp"
#include "studio_server/schema_pb.hpp"
#include "studio_server/utils.hpp"

#include <atomic>
#include <chrono>
#include <iostream>
#include <thread>

using json = nlohmann::json;

static uint64_t nanosecondsSinceEpoch(){
    return uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(
                      std::chrono::system_clock::now().time_since_epoch())
                      .count());
}

int main(int argc, char **argv) {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    foxglove::websocket::Server server{8765, "Studio-Server"};

    const auto ch_pcl_pb = server.addChannel({
        .topic = "radar_pcl3",
        .encoding = "protobuf",
        .schemaName = "PointCloud",
        .schema = studio_server::schema::PointCloud_desc
    });

    server.setSubscribeHandler([&](foxglove::websocket::ChannelId chanId) {
        std::cout << "first client subscribed to " << chanId << std::endl;
    });
    server.setUnsubscribeHandler([&](foxglove::websocket::ChannelId chanId) {
        std::cout << "last client unsubscribed from " << chanId << std::endl;
    });


    uint64_t i = 0;

    std::shared_ptr<boost::asio::steady_timer> timer;
    std::function<void()> setTimer = [&] {
        timer = server.getEndpoint().set_timer(200, [&](std::error_code const &ec) {
            if (ec) {
                std::cerr << "timer error: " << ec.message() << std::endl;
                return;
            }

        auto pcl3_pb_data = studio_server::utils::getPointCloudPbData();
        server.sendMessage(ch_pcl_pb, nanosecondsSinceEpoch(), pcl3_pb_data);

        setTimer();
      });
    };

    setTimer();

    boost::asio::signal_set signals(server.getEndpoint().get_io_service(),
                                  SIGINT);

    signals.async_wait([&](std::error_code const &ec, int sig) {
      if (ec) {
        std::cerr << "signal error: " << ec.message() << std::endl;
        return;
      }
      std::cerr << "received signal " << sig << ", shutting down" << std::endl;
      server.stop();
      if (timer) {
        timer->cancel();
      }
    });

    server.run();

    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}
