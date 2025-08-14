cmake_minimum_required(VERSION 3.8)
project(opencat_serial)

# 设置C++标准为17（ROS2 Humble默认）
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(opencat REQUIRED)
find_package(asio_cmake_module REQUIRED)
find_package(io_context REQUIRED)  # 显式添加io_context

# 包含目录
include_directories(
  include
  ${opencat_INCLUDE_DIRS}  # 添加opencat的头文件路径
  ${ament_INCLUDE_DIRS}
)

# 声明库
add_library(${PROJECT_NAME} SHARED
  src/serial.cpp  # 必须包含实现文件
  src/opencat_serial.cpp  # 其他源文件
)

# 链接依赖
target_link_libraries(${PROJECT_NAME}
  ${rclcpp_LIBRARIES}
  ${opencat_LIBRARIES}
)

# 添加依赖
ament_target_dependencies(${PROJECT_NAME}
  rclcpp
  opencat
  opencat_msgs
)

# 安装目标
install(TARGETS ${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

# 安装头文件
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION include/${PROJECT_NAME}
)

# 导出依赖
ament_export_dependencies(
  rclcpp
  opencat
)

# 导出包含目录
ament_export_include_directories(include)

# 导出库
ament_export_libraries(${PROJECT_NAME})

ament_package()