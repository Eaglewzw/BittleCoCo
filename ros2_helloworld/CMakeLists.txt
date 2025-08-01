cmake_minimum_required(VERSION 3.8)
project(ros2_helloworld)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()




include_directories(./include/ros2_helloworld/)

add_executable(ros2_helloworld ./src/main.cpp)
ament_target_dependencies(ros2_helloworld rclcpp)				#添加节点的依赖

install(TARGETS
        ros2_helloworld
        DESTINATION lib/${PROJECT_NAME})


        