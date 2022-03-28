#include <ros/ros.h>
#include <iostream>
#include <sstream>
#include "mastering_ros_demo_pkg/demo_srv.h"
using namespace std;
int main(int argc,char **argv)
{
    ros::init(argc,argv,"demo_service_client");
    ros::NodeHandle node_odj;
    ros::ServiceClient client=node_odj.serviceClient<mastering_ros_demo_pkg::demo_srv>("demo_service");
    ros::Rate loop_rate(10);
    while (ros::ok())
    {
        mastering_ros_demo_pkg::demo_srv srv;
        std::stringstream ss;
        ss << "Sending from Here";
        srv.request.in=ss.str();
        if(client.call(srv))
        {
            ROS_INFO("From Client [%s], Server says [%s]",srv.request.in.c_str(),srv.response.out.c_str());
        }
        else{
            ROS_ERROR("Failed to call service");
            return 1;
        }
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}



