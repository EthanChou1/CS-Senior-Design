#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "std_msgs/msg/header.hpp"
#include <cv_bridge/cv_bridge.hpp>
#include <opencv2/opencv.hpp>
#include <chrono>

using namespace std::chrono_literals;

class MinimalImagePublisher : public rclcpp::Node {
public:
  MinimalImagePublisher() : Node("opencv_image_publisher"), count_(0) {
    // Open USB camera (usually device 0, but it may vary)
    cap_.open(0);
    if (!cap_.isOpened()) {
      RCLCPP_ERROR(this->get_logger(), "Could not open the USB camera.");
      rclcpp::shutdown();
    }

    // Configure camera properties
    cap_.set(cv::CAP_PROP_FOURCC, cv::VideoWriter::fourcc('M', 'J', 'P', 'G')); // Use MJPG format
    cap_.set(cv::CAP_PROP_FRAME_WIDTH, 640);
    cap_.set(cv::CAP_PROP_FRAME_HEIGHT, 480);
    cap_.set(cv::CAP_PROP_FPS, 30);

    // Verify camera settings
    RCLCPP_INFO(this->get_logger(), "Camera settings: %d x %d at %.0f FPS",
                static_cast<int>(cap_.get(cv::CAP_PROP_FRAME_WIDTH)),
                static_cast<int>(cap_.get(cv::CAP_PROP_FRAME_HEIGHT)),
                cap_.get(cv::CAP_PROP_FPS));

    // Configure QoS to use Reliable mode
    rclcpp::QoS qos(rclcpp::KeepLast(10));
    qos.reliable();

    // Create publisher with Reliable QoS
    publisher_ = this->create_publisher<sensor_msgs::msg::Image>("camera_image", qos);

    // Create a timer to publish frames at 30 FPS
    timer_ = this->create_wall_timer(
        33ms, std::bind(&MinimalImagePublisher::timer_callback, this)); // 30 FPS
  }

private:
  void timer_callback() {
    cv::Mat frame;
    cap_ >> frame;  // Capture a frame from the camera

    // Check if the captured frame is valid
    if (frame.empty()) {
      RCLCPP_WARN(this->get_logger(), "Received an empty frame from the camera.");
      return;
    }

    // Log frame size before any processing
    RCLCPP_INFO(this->get_logger(), "Captured frame size: %d x %d", frame.cols, frame.rows);

    // Convert frame to ROS message
    auto msg = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", frame).toImageMsg();

    // Validate message data size
    RCLCPP_INFO(this->get_logger(), "Message data size: %lu", msg->data.size());

    // Publish the message
    publisher_->publish(*msg);
    RCLCPP_INFO(this->get_logger(), "Frame %ld published", count_);
    count_++;
  }

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
  cv::VideoCapture cap_;
  size_t count_;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MinimalImagePublisher>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

