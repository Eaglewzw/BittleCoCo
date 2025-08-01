cmake_minimum_required(VERSION 3.8)
project(opencat)

# Default to C++17 (ROS2 Humble默认标准)
set(CMAKE_CXX_STANDARD 17)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(opencat_msgs REQUIRED)


# 关键修改：添加依赖导出
ament_export_dependencies(opencat_msgs)

# 包含目录设置
include_directories(
  include
  ${ament_INCLUDE_DIRS}
  ${opencat_msgs_INCLUDE_DIRS}  # 添加这行
)



# 配置Python安装
ament_python_install_package(${PROJECT_NAME}
  PACKAGE_DIR src/${PROJECT_NAME}
)


# 关键添加：导出头文件目录
install(
  DIRECTORY include/
  DESTINATION include
)

# 关键添加：导出包含目录
ament_export_include_directories(include)



ament_package()