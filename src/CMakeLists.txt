add_subdirectory(foxglove_pb)

if (CMAKE_SYSTEM_NAME MATCHES "Linux")
    include_directories(${PROJECT_SOURCE_DIR}/include)
    add_executable(studio_server studio_server.cpp utils.cpp)
    target_link_libraries(studio_server foxglove_pb boost_thread)
endif (CMAKE_SYSTEM_NAME MATCHES "Linux")


