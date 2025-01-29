#include "rclcpp/rclcpp.hpp"


class Offboard: public rclcpp::Node{
    public:
    
        Offboard() : Node("Auto_Controller")
        {
            RCLCPP_INFO(this->get_logger(), "Auto Node Initialized");
            timer = this->create_wall_timer(std::chrono::seconds(1), std::bind(&Offboard::timerCallback, this));
        }


    
    private:
    
        void timerCallback()
        {
            RCLCPP_INFO(this->get_logger(), "Function call");
        }
    

    rclcpp::TimerBase::SharedPtr timer;



};










int main(int argr, char **argv){

    rclcpp::init(argr,argv);
    auto node = std::make_shared<rclcpp::Node>("Auto_Controller");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}