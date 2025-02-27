#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include <cv_bridge/cv_bridge.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/aruco.hpp>
#include <cmath>

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
              // Get the corners of the detected marker
              std::vector<cv::Point2f> corners = marker_corners[i];

              // Calculate the center of the marker
              cv::Point2f center(0, 0);
              for (const auto& corner : corners) {
                center += corner;
              }
              center /= 4.0;

              // Marks the center of ArUco
              cv::circle(frame, center, 5, cv::Scalar(0, 255, 0), -1);

              // Find the distance from camera
              float marker_size = 0.1; // Size of the ArUco marker in meters
              std::vector<cv::Point3f> object_points = {
                  cv::Point3f(-marker_size / 2, marker_size / 2, 0),
                  cv::Point3f(marker_size / 2, marker_size / 2, 0),
                  cv::Point3f(marker_size / 2, -marker_size / 2, 0),
                  cv::Point3f(-marker_size / 2, -marker_size / 2, 0)
              };

              // Camera resolution
              cv::Mat camera_matrix = (cv::Mat_<double>(3, 3) <<
                  600, 0, 320,  // fx = 600, cx = 320 (for 640x480 resolution)
                  0, 600, 240,  // fy = 600, cy = 240 (for 640x480 resolution)
                  0, 0, 1);
              cv::Mat dist_coeffs = cv::Mat::zeros(4, 1, CV_64F);
              cv::Vec3d rvec, tvec;
              cv::solvePnP(object_points, corners, camera_matrix, dist_coeffs, rvec, tvec);

              // Calculate distance (in meters)
              //double distance = cv::norm(tvec);
              double distance = 0 //Replace later

              // Calculate angle (in degrees)
              double angle_x = std::atan2(tvec[0], tvec[2]) * 180 / CV_PI; 
              double angle_y = std::atan2(tvec[1], tvec[2]) * 180 / CV_PI; 

              // Print message
              RCLCPP_INFO(this->get_logger(), "The correct ArUco code (ID: %d) has been identified. Distance: %.2f meters, Horizontal angle: %.2f degrees, Vertical angle: %.2f degrees",
                          id, distance, angle_x, angle_y);

              target_found_ = true; // Set the flag to true after detection
            }
          } else {
            RCLCPP_WARN(this->get_logger(), "This is not the correct code (ID: %d).", id);
          }
        }
      } //else {
        //RCLCPP_INFO(this->get_logger(), "No ArUco markers detected in the frame.");
      //}

      // Display frame
      cv::imshow("ArUco Detection", frame);
      cv::waitKey(1);
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
  int target_id = 0; // Change this to your desired ID
  auto node = std::make_shared<MinimalImageSubscriber>(target_id);

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

