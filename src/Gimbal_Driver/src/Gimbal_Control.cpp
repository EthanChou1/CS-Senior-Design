#include "rclcpp/rclcpp.hpp"

int main(int argr, char **argv){

    rclcpp::init(argr,argv);
    auto node = std::make_shared<rclcpp::Node>("Gimbal_Controller");
    RCLCPP_INFO(node->get_logger(), "Hello World");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}