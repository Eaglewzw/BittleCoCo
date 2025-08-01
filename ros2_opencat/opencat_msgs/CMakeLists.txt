cmake_minimum_required(VERSION 3.8)
project(opencat_msgs)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)


# Service definition
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/BaseTask.srv"
  DEPENDENCIES std_msgs builtin_interfaces
)

# Standard ROS2 package setup
ament_package()