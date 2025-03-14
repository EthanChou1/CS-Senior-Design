import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial

class ReceiverNode(Node):
    def __init__(self):
        super().__init__('receiver_node')
        
        # config serial port
        self.serial_port = serial.Serial('/dev/ttyUSB0', baudrate=57600, timeout=100) # note: change /dev/ttyUSB0 to desired port
        
        # ROS publisher (publishes received msgs to ROS topic)
        self.publisher_ = self.create_publisher(String, 'received_data', 10)
        
        # timer - check for new serial msgs every 0.1sec
        self.timer = self.create_timer(0.1, self.read_from_serial)
    # end def __init__

    def read_from_serial(self):
        # read msgs from USB radio & publishe them to ROS topic
        if self.serial_port.in_waiting > 0:
            data = self.serial_port.readline().decode('utf-8').strip()
            if data:
                msg = String()
                msg.data = data
                self.publisher_.publish(msg)
                self.get_logger().info(f'Received from radio: {data}')
            # end if statement
        # end if statement
    # end def read_from_serial

def main(args=None):
    rclpy.init(args=args)
    node = ReceiverNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
# end def main

if __name__ == '__main__':
    main()
# end main program area
