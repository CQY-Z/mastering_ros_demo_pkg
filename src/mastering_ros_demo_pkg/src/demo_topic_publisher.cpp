#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <iostream>

int main(int argc, char * argv[])
{
    //initize a node of ROS
    ros::init(argc, argv, "demo_topic_publisher");
    //create a nodeHandle
    ros::NodeHandle node_obj;
    //create a topic and its' type is "std_msgs::Int32, its' name is /number and buffersize is 10
    ros::Publisher number_publisher= node_obj.advertise<std_msgs::Int32>("/numbers",10);
    // set 10Hz of frequency 
    ros::Rate loop_rate(10);
    int number_count=0;
    while (ros::ok())//when call shutdown function, ok() will return false , else if return ture
    {
        std_msgs::Int32 msg;
        msg.data = number_count; // this is message data that publisher topic will send 
        ROS_INFO("%d",msg.data);//display message data on the terminal
        number_publisher.publish(msg);// publisher publish message to topic-"/numbers"
        ros::spinOnce();
        loop_rate.sleep();
        number_count++;
        if (number_count==100)
        {
            ros::shutdown();
        }
    }
    return 0;
}


