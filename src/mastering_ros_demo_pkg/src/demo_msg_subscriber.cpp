#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <iostream>
#include <sstream>
#include "mastering_ros_demo_pkg/demo_msg.h"

using namespace std;

void number_callback(const mastering_ros_demo_pkg::demo_msg::ConstPtr& msg)
{
    ROS_INFO("Recieved greeting [%s]",msg->greeting.c_str());
    ROS_INFO("Recieved [%d]",msg->number);

}

int main(int argc, char **argv)
{
    ros::init(argc,argv,"demo_msg_subscriber");
    ros::NodeHandle node_od;
    ros::Subscriber number_subscriber=node_od.subscribe("/demo_msg_topic",10,number_callback);
    ros::spin();
    return 0;

}

