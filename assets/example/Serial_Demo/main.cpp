#include "serial.hpp"  // 包含你的头文件
#include <iostream>
#include <chrono>
#include <thread>

/**
 * 可将USB串口的TX和RX引脚连接在一起进行回环测试。
 *  stty -F /dev/ttyUSB1 -echo  # 关闭回显
 * 
 * 
 */

int main() 
{
    try {
        // 1. 初始化串口 (设备路径, 波特率, 数据位, 奇偶校验)
        Serial::Serial my_serial("/dev/ttyS1", B115200, CS8, false);
        std::string input;


        while(true) {
            // 2. 获取用户输入
            std::cout << "请输入要发送的字符串 (输入exit退出): ";
            std::getline(std::cin, input);
            if (input == "exit") {
                break;
            }
            
            // 3. 转换为字节数组
            std::vector<uint8_t> send_data(input.begin(), input.end());
            send_data.push_back('\n');  // 添加换行符
            
            // 4. 发送数据
            int send_result = my_serial.send(send_data);
            if (send_result < 0) {
                std::cerr << "发送失败" << std::endl;
            } else {
                std::cout << "发送成功，发送字节数: " << send_result << std::endl;
            }
            
            // 等待数据到达
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
            
            // 5. 等待并接收数据
            // 按行读取
            std::string line = my_serial.readline();
            std::cout << "接收到一行: " << line << std::endl;
        }  
    } catch (const std::exception &e) {
        std::cerr << "串口错误: " << e.what() << std::endl;
        return -1;
    }
    
    return 0;
}