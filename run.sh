# 从tros.b的安装路径中拷贝出运行示例需要的配置文件。
cp -r /opt/tros/humble/lib/mono2d_body_detection/config/ .
cp -r /opt/tros/humble/lib/hand_lmk_detection/config/ .
cp -r /opt/tros/humble/lib/hand_gesture_detection/config/ .

# 配置USB摄像头
export CAM_TYPE=usb

# 启动launch文件
# ros2 launch hand_gesture_detection hand_gesture_detection.launch.py
ros2 launch hand_gesture_detection hand_gesture_fusion.launch.py 
