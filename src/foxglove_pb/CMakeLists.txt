add_definitions(-fPIC)
find_package(Protobuf REQUIRED)

if(Protobuf_FOUND)
    message(STATUS "Using Protocol Buffers ${Protobuf_VERSION}")
endif()

file(GLOB HDRS ${PROJECT_SOURCE_DIR}/include/foxglove/*.pb.h)
file(GLOB SRCS *.pb.cc)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(LIB_NAME foxglove_pb)
add_library(${LIB_NAME} SHARED ${SRCS} ${HDRS})
target_include_directories(${LIB_NAME} PUBLIC ${Protobuf_INCLUDE_DIRS})
target_link_libraries(${LIB_NAME} protobuf pthread)