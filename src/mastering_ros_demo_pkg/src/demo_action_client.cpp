#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <iostream>
#include <sstream>
#include "mastering_ros_demo_pkg/Demo_actionAction.h"
#include <actionlib/client/simple_action_client.h>
#include <actionlib/client/terminal_state.h>

int main(int argc, char **argv)
{
    ros::init(argc,argv,"demo_action_client");
    if (argc != 3)
    {
        ROS_INFO("%d",argc);
        ROS_WARN("Usage: demo action_client <goal> <time_to_preempt_in_sec>");
        return 1;
    }
    actionlib::SimpleActionClient<mastering_ros_demo_pkg::Demo_actionAction> ac("demo_action",true);
    ROS_INFO("Waiting for action server to start.");
    ac.waitForServer();
    ROS_INFO("Action server started, sending goal.");

    mastering_ros_demo_pkg::Demo_actionGoal goal;
    goal.count=atoi(argv[1]);
    ROS_INFO("Sending Goal [%d] and Preempt time of [%d]",goal.count,atoi(argv[2]));
    ac.sendGoal(goal);

    bool finished_before_timeout=ac.waitForResult(ros::Duration(atoi(argv[2])));
    ac.cancelGoal();

    if(finished_before_timeout)
    {
        actionlib::SimpleClientGoalState state=ac.getState();
        ROS_INFO("Action finished: %s",state.toString().c_str());

        ac.cancelGoal();
    }
    else
        ROS_INFO("Action did not finish before the time out.");
    
    return 0;
}