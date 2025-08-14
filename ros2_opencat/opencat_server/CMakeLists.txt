cmake_minimum_required(VERSION 3.5)
project(opencat_server)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 设置C++标准为17（ROS2 Humble默认）
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)



# find dependencies
find_package(ament_cmake REQUIRED)
find_package(opencat_serial REQUIRED)
find_package(rclcpp REQUIRED)

include_directories(include)
# 包含头文件目录
include_directories(
  ${opencat_serial_INCLUDE_DIRS}  # 自动包含 opencat_serial 的头文件路径
)

add_executable(opencat_service_node
  src/opencat_service_node.cpp
  src/opencat_server.cpp
)


target_link_libraries(opencat_service_node
  ${opencat_serial_LIBRARIES}
  
)

ament_target_dependencies(opencat_service_node
  opencat_serial
  rclcpp
)

install(
  TARGETS opencat_service_node
  DESTINATION lib/${PROJECT_NAME}
  )


ament_package()
