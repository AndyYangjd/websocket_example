#include "studio_server/utils.hpp"


namespace studio_server::utils{
    inline std::string setData(){
        char buffer[12];

        union32_t<float> pos_x, pos_y, pos_z;
        pos_x.data=10.0;
        pos_y.data=20;
        pos_z.data=30;

        buffer[0]=((char)(pos_x.bits.bit_08));
        buffer[1]=((char)(pos_x.bits.bit_16));
        buffer[2]=((char)(pos_x.bits.bit_24));
        buffer[3]=((char)(pos_x.bits.bit_32));

        buffer[4]=((char)(pos_y.bits.bit_08));
        buffer[5]=((char)(pos_y.bits.bit_16));
        buffer[6]=((char)(pos_y.bits.bit_24));
        buffer[7]=((char)(pos_y.bits.bit_32));

        buffer[8]=((char)(pos_z.bits.bit_08));
        buffer[9]=((char)(pos_z.bits.bit_16));
        buffer[10]=((char)(pos_z.bits.bit_24));
        buffer[11]=((char)(pos_z.bits.bit_32));

        std::string str_buffer(buffer, 12);

        return str_buffer;
    }

    inline void setField(field_t* field, const std::string& name, uint32_t offset, field_type_t type){
        field->set_name(name);
        field->set_offset(offset);
        field->set_type(type);
    }

    inline void setPose(pose_t* pose){
        auto trans = pose->mutable_position();
        trans->set_x(0);
        trans->set_y(0);
        trans->set_z(0);

        auto rotat = pose->mutable_orientation();
        rotat->set_x(0);
        rotat->set_y(0);
        rotat->set_z(0);
        rotat->set_w(1);
    }

    inline void setTs(ts_t* ts){
        auto now = std::chrono::system_clock::now();
        auto sec = std::chrono::duration_cast<std::chrono::seconds>(now.time_since_epoch()).count();
        auto ns = std::chrono::duration_cast<std::chrono::nanoseconds>(now.time_since_epoch()).count()
                  - sec * 1000000000;
        ts->set_seconds(sec);
        ts->set_nanos((int32_t)(ns));

        // ts = TimeUtil::SecondsToTimestamp(time(NULL));
    }

    std::string getPointCloudPbData(){
        foxglove::PointCloud pcl_msg;

        // set timestamp
        auto ts = pcl_msg.mutable_timestamp();
        setTs(ts);

        // set frame-id
        pcl_msg.set_frame_id("radar_4D");

        // set pose
        auto pose_msg = pcl_msg.mutable_pose();
        setPose(pose_msg);

        // set point-stride
        pcl_msg.set_point_stride(12);

        // set fields
        auto field_pos_x = pcl_msg.add_fields();
        setField(field_pos_x, "x", 0, ::foxglove::PackedElementField::FLOAT32);
        auto field_pos_y = pcl_msg.add_fields();
        setField(field_pos_y, "y", 4, ::foxglove::PackedElementField::FLOAT32);
        auto field_pos_z = pcl_msg.add_fields();
        setField(field_pos_z, "z", 8, ::foxglove::PackedElementField::FLOAT32);

        // set data
        std::string buffer = setData();
        pcl_msg.set_data(buffer);

        // serialize to string
        std::string re_pcl_data_pb;
        pcl_msg.SerializeToString(&re_pcl_data_pb);

        return re_pcl_data_pb;
    }
}


