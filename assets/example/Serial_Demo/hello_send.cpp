#include "serial.hpp"  // 包含你的头文件
#include <iostream>
#include <chrono>
#include <thread>

/**
 * 可将USB串口的TX和RX引脚连接在一起进行回环测试。
 * 
 * 
 * 
 */

int main() 
{
    try {
        // 1. 初始化串口 (设备路径, 波特率, 数据位, 奇偶校验)
        Serial::Serial my_serial("/dev/ttyUSB1", B115200, CS8, false);
        
        // 2. 发送数据
        std::vector<uint8_t> send_data = {'H', 'e', 'l', 'l', 'o', 'w' , '\n'};
        int send_result = my_serial.send(send_data);
        if (send_result < 0) {
            std::cerr << "发送失败" << std::endl;
        } else {
            std::cout << "发送成功，发送字节数: " << send_result << std::endl;
        }
        
        // 3. 接收指定字节数
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // 等待数据到达
        // std::vector<uint8_t> received_data = my_serial.receive(5);  // 接收5字节
        // std::cout << "接收到 " << received_data.size() << " 字节数据: ";
        // for (auto byte : received_data) {
        //     std::cout << byte << " ";
        // }
        // std::cout << std::endl;
        
        // 4. 按行读取
        std::string line = my_serial.readline();
        std::cout << "接收到一行: " << line << std::endl;
        
    } catch (const std::exception &e) {
        std::cerr << "串口错误: " << e.what() << std::endl;
        return -1;
    }
    
    return 0;
}