cmake_minimum_required(VERSION 3.10)
project(serial_example)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 创建可执行文件
add_executable(serial_example
    serial.cpp
    main.cpp  # 包含上面示例代码的文件
)

# 链接必要的库
target_link_libraries(serial_example
    pthread  # 可能需要链接pthread
)

# 创建可执行文件
add_executable(hello_send
    serial.cpp
    hello_send.cpp  # 包含上面示例代码的文件
)

# 链接必要的库
target_link_libraries(hello_send
    pthread  # 可能需要链接pthread
)