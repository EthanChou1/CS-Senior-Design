#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include <cv_bridge/cv_bridge.hpp>
#include <opencv2/opencv.hpp>
#include <sys/stat.h>
#include <sys/types.h>

class MinimalImageSubscriber : public rclcpp::Node {
public:
  MinimalImageSubscriber() : Node("image_subscriber"), count_(0) { // Initialize count_
    // Configure Reliable QoS
    rclcpp::QoS qos(rclcpp::KeepLast(10));
    qos.reliable();

    // Create a subscription with Reliable QoS
    subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
        "camera_image", qos,
        std::bind(&MinimalImageSubscriber::image_callback, this, std::placeholders::_1));
  }

private:
  void image_callback(const sensor_msgs::msg::Image::SharedPtr msg) {
    try {
      cv::Mat frame = cv_bridge::toCvCopy(msg, "bgr8")->image;

      if (frame.empty()) {
        RCLCPP_WARN(this->get_logger(), "Decoded frame is empty.");
        return;
      }

      // Ensure the folder exists
      std::string folder_path = "/home/ethan/saved_images/";
      ensure_folder_exists(folder_path);

      // Save the frame to the specified folder
      std::string filename = folder_path + "received_frame_" + std::to_string(count_) + ".jpg";
      cv::imwrite(filename, frame);
      RCLCPP_INFO(this->get_logger(), "Frame %ld saved to '%s'", count_, filename.c_str());
      count_++;

    } catch (const cv_bridge::Exception &e) {
      RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
    } catch (const cv::Exception &e) {
      RCLCPP_ERROR(this->get_logger(), "OpenCV exception: %s", e.what());
    }
  }

  void ensure_folder_exists(const std::string &folder_path) {
    struct stat info;
    if (stat(folder_path.c_str(), &info) != 0) {
      // Folder doesn't exist, create it
      if (mkdir(folder_path.c_str(), 0777) == 0) {
        RCLCPP_INFO(this->get_logger(), "Created folder: %s", folder_path.c_str());
      } else {
        RCLCPP_ERROR(this->get_logger(), "Failed to create folder: %s", folder_path.c_str());
      }
    } else if (!(info.st_mode & S_IFDIR)) {
      RCLCPP_ERROR(this->get_logger(), "%s exists but is not a folder.", folder_path.c_str());
    }
  }

  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
  size_t count_; // Add count_ as a member variable
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MinimalImageSubscriber>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

