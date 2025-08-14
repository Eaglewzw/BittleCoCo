cmake_minimum_required(VERSION 3.10)
project(serial_example)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)

#####################################################################################
add_executable(main
    serial.cpp
    main.cpp  # 包含上面示例代码的文件
)

# 链接必要的库
target_link_libraries(main
    pthread  # 可能需要链接pthread
)

#####################################################################################
add_executable(serial_example
    serial.cpp
    opencat_serial.cpp  # 包含上面示例代码的文件
    serial_example.cpp
)

# 链接必要的库
target_link_libraries(serial_example
    pthread  # 可能需要链接pthread
)