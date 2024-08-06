# frcobot_ros2
该项目为法奥机器人ROS2 API接口，基于法奥SDK库，简化了参数并提供了service接口，用户可以发送字符串指令到接口实现对应的功能。
API函数的介绍见API说明.md文件
安装教程及说明可以参考法奥文档平台的内容: https://fr-documentation.readthedocs.io/zh_CN/latest/ROSGuide/ros2guide.html


2024.8.6:
更新了V3.7.3适配版本，对3.7.3的反馈端口数据结构进行了更新。

2024.8.6：
1.上传V2.0版本的ROS2包与V3.7.3适配，新增ros2_control插件，moveit2配置包和URDF包等。
2.frhal_msgs更名为fairino_msgs，fr_ros2更名为fairino_hardware
3.fairino_hardware包中的ros2_command_server中的MOVEJ指令需要指定工具号和工件号，比如之前版本输入的是MOVEJ(JNT1,100)，当前版本需要输入MOVEJ(JNT1,100,0,1),其中0是工具坐标系号，1是工件坐标系号