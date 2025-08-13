#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <chrono>
#include <iostream>
#include <rclcpp/node.hpp>
#include <rclcpp/timer.hpp>

class HelloWorld : public rclcpp::Node 
{
    public:
        HelloWorld() : Node("helloworld") 
        {

            timer_ = this->create_wall_timer(
                std::chrono::milliseconds(500),
                std::bind(&HelloWorld::timer_callback, this)
            );
        }

    private:
        void timer_callback() 
        {
            RCLCPP_INFO(this->get_logger(), "Hello, OpenCat!");
        }

        rclcpp::TimerBase::SharedPtr timer_;
};

#endif //HELLOWORLD_H