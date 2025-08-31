#!/bin/bash
source /opt/tros/humble/setup.sh
source /root/ros2_ws/install/setup.bash
# 从tros.b的安装路径中拷贝出运行示例需要的配置文件。
cp -r /opt/tros/humble/lib/mono2d_body_detection/config/ .
cp -r /opt/tros/humble/lib/hand_lmk_detection/config/ .
cp -r /opt/tros/humble/lib/hand_gesture_detection/config/ .


# 配置USB摄像头
export CAM_TYPE=usb
# 启动手势检测launch文件（后台运行）
echo "启动手势检测节点..."
# ros2 launch hand_gesture_detection hand_gesture_fusion.launch.py &
ros2 launch hand_gesture_detection hand_gesture_fusion.launch.py > /dev/null 2>&1 &

# 等待额外的安全时间
echo "等待节点完全初始化..."
sleep 10

# 启动控制节点
echo "启动腿部控制节点..."
ros2 run gesture_legs_control gesture_legs_control