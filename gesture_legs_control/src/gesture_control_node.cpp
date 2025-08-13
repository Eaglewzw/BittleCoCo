#include "gesture_control_node.h"

#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <thread>


GestureControlNode::GestureControlNode(): Node("GestureControlNode")
{

    RCLCPP_INFO(rclcpp::get_logger("GestureControlNode"), "Gesture Control Node subscribing to AI message topic...");


    smart_subscription_ =
        this->create_subscription<ai_msgs::msg::PerceptionTargets>(
            ai_msg_sub_topic_name_,
             rclcpp::QoS(10).reliable(),
            std::bind(&GestureControlNode::SmartTopicCallback,
                        this,
                        std::placeholders::_1));

    // Start the gesture control loop in a separate thread
    gesture_control_thread_ = std::thread(&GestureControlNode::gesture_control_loop, this); 
    RCLCPP_INFO(rclcpp::get_logger("GestureControlNode"), "---------------------");
}




void GestureControlNode::gesture_control_loop()
{
    rclcpp::WallRate loop_rate(30);

    while (rclcpp::ok())
    {
        gesture_ctrl_type_ = static_cast<GestureCtrlType>(gesture_value_);
         switch(gesture_ctrl_type_) {
            case GestureCtrlType::ThumbLeft:
 
                std::cout << "Legs relaxed.\n";
                break;
                
            case GestureCtrlType::ThumbRight:

                std::cout << "Left leg shake.\n";
                break;
            
            case GestureCtrlType::ThumbUp:
    
                std::cout << "Standing straight.\n";
                break;

            case GestureCtrlType::Okay:
         
                std::cout << "Standing straight.\n";
                break;

            case GestureCtrlType::Victory:
            case GestureCtrlType::Awesome:
            
                std::cout << "Push-up action performed.\n";
                break;
                
                
            case GestureCtrlType::None:
      
                std::cout << "No gesture detected, relaxing legs.\n";
                break;

            default:
            
                break;
         }

        loop_rate.sleep();
    }
}


template<typename T>
T find_most_frequent_in_queue(std::queue<T> q) 
{
    // 统计每个元素出现的频率
    std::unordered_map<T, int> frequency_map;
    
    while (!q.empty()) {
        frequency_map[q.front()]++;
        q.pop();
    }

    // 找到出现次数最多的元素
    auto max_it = std::max_element(
        frequency_map.begin(),
        frequency_map.end(),
        [](const auto& a, const auto& b) {
            return a.second < b.second;
        });

    if (max_it == frequency_map.end()) {
        throw std::runtime_error("Queue is empty");
    }

    return max_it->first;
}

void GestureControlNode::SmartTopicCallback(const ai_msgs::msg::PerceptionTargets::ConstSharedPtr msg) 
{

    RCLCPP_INFO(rclcpp::get_logger("GestureControlNode"), "----------------GestureControlNodeCallback---------------");
    gesture_value_vector.clear(); // Clear the vector to store new gesture values
    // Process the gesture value from the message
   if (msg->targets.empty()) 
   {
        gesture_value_ = 0;
        RCLCPP_WARN(rclcpp::get_logger("GestureControlNode"), "Empty targets in gesture message");
        return;
    }
    
    for (const auto& tar : msg->targets) 
    {
        for (const auto& attr : tar.attributes)
        {
            gesture_value_vector.push_back(attr.value);
        }
        
    }

    // RCLCPP_INFO(rclcpp::get_logger("GestureControlNode"), "\r\nsize of vector:%d", gesture_value_vector.size());
    for (auto it = gesture_value_vector.begin(); it != gesture_value_vector.end(); ++it) 
    {
        if( *it == static_cast<int>(GestureCtrlType::Okay) || 
            *it == static_cast<int>(GestureCtrlType::ThumbLeft) || 
            *it == static_cast<int>(GestureCtrlType::ThumbRight) || 
            *it == static_cast<int>(GestureCtrlType::ThumbUp) || 
            *it == static_cast<int>(GestureCtrlType::Victory) || 
            *it == static_cast<int>(GestureCtrlType::Awesome) )
        {

        } else {
            *it = static_cast<int>(GestureCtrlType::None); // Set to None if the value is not recognized
        }        
        // RCLCPP_INFO(rclcpp::get_logger("GestureControlNode"), " %d ", *it);    
    }
    int current_gesture_value_ = gesture_value_vector.empty() ? 0 : *std::max_element(gesture_value_vector.begin(), gesture_value_vector.end()); // Use the first value or 0 if empty

    gesture_value_queue.push(current_gesture_value_);
    if (gesture_value_queue.size() > queue_len_limit_) {
        gesture_value_queue.pop();
    }

    gesture_value_ = find_most_frequent_in_queue(gesture_value_queue);

    RCLCPP_INFO(rclcpp::get_logger("GestureControlNode"), "Gesture value received: %d", gesture_value_);



   
}

// void GestureControlNode::SmartTopicCallback(
//     const ai_msgs::msg::PerceptionTargets::ConstSharedPtr msg) {
//   std::stringstream ss;
//   ss << "Recved ai msg"
//      << ", frame_id: " << msg->header.frame_id
//      << ", stamp: " << msg->header.stamp.sec << "_" << msg->header.stamp.nanosec
//      << ", targets size: " << msg->targets.size() << "\n";
//   for (const auto& tar : msg->targets) {
//     ss << "\t track_id: " << tar.track_id << ", type: " << tar.type;
//     ss << " has roi num: " << tar.rois.size();
//     for (const auto& roi : tar.rois) {
//       ss << ", roi type: " << roi.type;
//     }
//     ss << ", has attr num: " << tar.attributes.size();
//     for (const auto& attr : tar.attributes) {
//       ss << ", attr type: " << attr.type << ", val: " << attr.value;
//     }
//     ss << "\n";
//   }
//   RCLCPP_INFO(rclcpp::get_logger("GestureControlNode"), "%s", ss.str().c_str());

// }
