cmake_minimum_required(VERSION 3.8)
project(opencat)

# Default to C++17 (ROS2 Humble默认标准)
set(CMAKE_CXX_STANDARD 17)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(opencat_msgs REQUIRED)


# 配置Python安装
ament_python_install_package(${PROJECT_NAME}
  PACKAGE_DIR src/${PROJECT_NAME}
)



ament_package()