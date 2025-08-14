cmake_minimum_required(VERSION 3.5)
project(opencat_examples)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 设置C++标准为17（ROS2 Humble默认）
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# find dependencies
find_package(ament_cmake REQUIRED)
find_package(opencat_serial REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(serial_example src/serial_example.cpp)
ament_target_dependencies(serial_example
  opencat_serial)

add_executable(client_example src/client_example.cpp)

target_link_libraries(serial_example
  ${opencat_serial_LIBRARIES}
  
)

target_link_libraries(client_example
  ${opencat_serial_LIBRARIES}
  
)


ament_target_dependencies(client_example
  opencat_serial
  rclcpp)

install(
  TARGETS serial_example client_example
  DESTINATION lib/${PROJECT_NAME}
  )

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
