from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_opencv_demo',
            executable='minimal_opencv_ros2_node',
            name='publisher_node',
            output='screen'
        ),
        Node(
            package='my_opencv_demo',
            executable='minimal_opencv_ros2_subscriber',
            name='subscriber_node',
            output='screen'
        ),
    ])

