#include "ros/ros.h"
#include "std_msgs/Int64.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "easement_factor");
    ros::NodeHandle n;
    ros::Publisher pub_easement = n.advertise<std_msgs::Int64>("/hiro/easement", 1);
    ros::Rate loop_rate(200);
    while (ros::ok())
    {
        std_msgs::Int64 msg;
        pub_easement.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}