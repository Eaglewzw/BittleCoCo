# BittleCoCo

# 一些说明
- colcon build --packages-select package_name
- （1）开机后自动发送XAd，该指令用于关闭回复音效并禁用反应.
- （2）开机后自动发送m0 0，该指令用于头部归位.
- （3）需要开启ros server服务，否则用VLM做的时候无法完成应答模式.


# Skills Reference
![效果图片1](./assets/image.avif "串口控制命令表")
![效果图片1](./assets/image.png "串口控制命令表")

## 手势识别控制
| Gesture Name | Gesture Description | Control Action |
|-------------|---------------------|----------------|
| `ThumbLeft` | Thumb pointing left | Head turns left 60° and returns |
| `ThumbRight` | Thumb pointing right | Head turns right 60° and returns |
| `ThumbUp` | Thumbs up | Happy head shaking |
| `Okay` | OK hand sign | Sit down posture |
| `Victory` | Victory/V sign | Jump action |
| `Mute` | Mute hand sign | Rest mode |
| `Palm` | Open palm | High-five action |


## 效果图
- 上位机：`RDK X5`
- 下位机：`BiBoard V1.0`
![效果图片1](./assets/overview.jpg "BittleCoCo整体效果图")

