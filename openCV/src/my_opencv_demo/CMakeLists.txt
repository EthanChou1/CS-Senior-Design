cmake_minimum_required(VERSION 3.8)
project(my_opencv_demo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(image_transport REQUIRED)

find_package(OpenCV REQUIRED PATHS /home/ethan/opencv_build/build NO_DEFAULT_PATH)


# Include OpenCV headers
include_directories(${OpenCV_INCLUDE_DIRS})

# Add nodes
add_executable(minimal_opencv_ros2_node src/minimal_opencv_ros2_node.cpp)
ament_target_dependencies(minimal_opencv_ros2_node rclcpp std_msgs sensor_msgs cv_bridge image_transport OpenCV)
target_link_libraries(minimal_opencv_ros2_node ${OpenCV_LIBS})

add_executable(minimal_opencv_ros2_subscriber src/minimal_opencv_ros2_subscriber.cpp)
ament_target_dependencies(minimal_opencv_ros2_subscriber rclcpp sensor_msgs cv_bridge OpenCV)
target_link_libraries(minimal_opencv_ros2_subscriber ${OpenCV_LIBS})

# Install targets
install(TARGETS
  minimal_opencv_ros2_node
  minimal_opencv_ros2_subscriber
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()

