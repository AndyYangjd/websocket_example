#ifndef STUDIO_SERVER__UTILS__HPP_
#define STUDIO_SERVER__UTILS__HPP_

#include <iostream>
#include <fstream>
#include <google/protobuf/util/time_util.h>

#include <chrono>
#include "foxglove/PointCloud.pb.h"


namespace studio_server::utils{
    using ts_t =  ::google::protobuf::Timestamp;
    using field_type_t = ::foxglove::PackedElementField::NumericType;
    using pose_t = ::foxglove::Pose;
    using field_t = ::foxglove::PackedElementField;
    using ::google::protobuf::util::TimeUtil;

    template <typename T16>
    union union16_t
    {
        T16 data;
        struct
        {
            uint8_t bit_08 : 8;
            uint8_t bit_16 : 8;
        } bits;
    };

    template <typename T32>
    union union32_t
    {
        T32 data;
        struct
        {
            uint8_t bit_08 : 8;
            uint8_t bit_16 : 8;
            uint8_t bit_24 : 8;
            uint8_t bit_32 : 8;
        } bits;
    };

    inline std::string setData();
    inline void setField(field_t* field, const std::string& name, uint32_t offset, field_type_t type);
    inline void setPose(pose_t* pose);
    inline void setTs(ts_t* ts);
    std::string getPointCloudPbData();
}

#endif // STUDIO_SERVER__UTILS__HPP_