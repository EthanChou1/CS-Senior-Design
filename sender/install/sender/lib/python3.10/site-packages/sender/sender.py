import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial

class SenderNode(Node):
    def __init__(self):
        super().__init__('SenderNode')
        
        # config serial port
        self.serial_port = serial.Serial('/dev/ttyUSB0', baudrate=57600, timeout=100) # note: change /dev/tyUSB0 to my port
        
        # # ROS publisher (for debugging)
        # self.publisher_ = self.create_publisher(String, 'send_data', 10)
        
        # boolean indicating whether aruco marker location has been found
        self.loc_found = False

        # timer to update location constantly
        self.timer = self.create_timer(1.0, self.update_loc_found)
    # end def __init__

    def publish_message(self):
        msg = String()
        msg.data = 'Coordinates: 123.456, 789.101'
        
        # send msg over USB radio
        self.serial_port.write((msg.data + '\n').encode('utf-8'))
        
        # log sent msg
        self.get_logger().info(f'Sent over radio: {msg.data}')
    # end def publish_message

    def update_loc_found(self):
        self.loc_found = 'True' == (input('Has the aruco marker location been found? (True/False) '))
        if self.loc_found:
            self.publish_message()
            self.timer.cancel()
        # end if statement
    # end def update_loc_found
# end class SenderNode

def main(args=None):
    rclpy.init(args=args)
    node = SenderNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
# end def main

if __name__ == '__main__':
    main()
# end main program area
