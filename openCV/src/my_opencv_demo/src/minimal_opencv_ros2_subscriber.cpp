#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include <cv_bridge/cv_bridge.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/aruco.hpp>

class MinimalImageSubscriber : public rclcpp::Node {
public:
  MinimalImageSubscriber(int target_id)
      : Node("image_subscriber"), target_id_(target_id), target_found_(false) {
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
      // If target already found, skip further processing
      if (target_found_) return;

      cv::Mat frame = cv_bridge::toCvCopy(msg, "bgr8")->image;

      if (frame.empty()) {
        RCLCPP_WARN(this->get_logger(), "Decoded frame is empty.");
        return;
      }

      // Detect ArUco codes in the frame
      std::vector<int> marker_ids;
      std::vector<std::vector<cv::Point2f>> marker_corners;
      cv::Ptr<cv::aruco::Dictionary> dictionary = cv::makePtr<cv::aruco::Dictionary>(
          cv::aruco::getPredefinedDictionary(cv::aruco::DICT_4X4_50));

      cv::aruco::detectMarkers(frame, dictionary, marker_corners, marker_ids);

      if (!marker_ids.empty()) {
        for (int id : marker_ids) {
          if (id == target_id_) {
            if (!target_found_) {
              RCLCPP_INFO(this->get_logger(), "The correct ArUco code (ID: %d) has been identified.", id);
              target_found_ = true; // Set the flag to true after detection
            }
          } else {
            RCLCPP_WARN(this->get_logger(), "This is not the correct code (ID: %d).", id);
          }
        }
      } else {
        RCLCPP_INFO(this->get_logger(), "No ArUco markers detected in the frame.");
      }
    } catch (const cv_bridge::Exception &e) {
      RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
    } catch (const cv::Exception &e) {
      RCLCPP_ERROR(this->get_logger(), "OpenCV exception: %s", e.what());
    }
  }

  rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
  int target_id_;      // The target ArUco marker ID
  bool target_found_;  // Flag to indicate if the target has been found
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);

  // Specify the target ArUco marker ID
  int target_id = 17; // Change this to your desired ID
  auto node = std::make_shared<MinimalImageSubscriber>(target_id);

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

