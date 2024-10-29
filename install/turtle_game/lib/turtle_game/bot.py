#!/usr/bin/python3

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from fun5mini_interfaces.srv import *

import numpy as np

class BotNode(Node):
    def __init__(self):
        super().__init__('bot_node')

        # service client
        self.eat_client = self.create_client(EatCall, 'call_eat')
        
        # publisher
        self.cmd_vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        # subscription
        self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        self.create_subscription(Pose, '/target', self.target_callback, 10)

        # timer
        self.dt = 0.01
        self.create_timer(self.dt, self.timer_loop)

        # variable
        self.robot_pose = [0.0 , 0.0 , 0.0]
        self.target_pose = [0.0 , 0.0]
        self.gain = [1.0, 5.0]

        self.get_logger().info(F'Node Bot Start')

    def timer_loop(self):
        dx = self.target_pose[0] - self.robot_pose[0]
        dy = self.target_pose[1] - self.robot_pose[1]
        d = np.sqrt(dx**2 + dy**2)
        v_x = self.gain[0] * d
        
        e = np.arctan2(dy,dx) - self.robot_pose[2]
        e_theta = np.arctan2(np.sin(e),np.cos(e))
        w = self.gain[1] * e_theta

        if d < 0.5:
            self.cmdvel(0.0 , 0.0)
            msg = EatCall.Request()
            msg.call = True
            self.eat_client.call_async(msg)
            self.get_logger().info(F'Bot Stop Move')
        else:
            self.cmdvel(v_x,w)

    def cmdvel(self, v, w):
        msg = Twist()
        msg.linear.x = v
        msg.angular.z = w
        self.cmd_vel_pub.publish(msg)

    def pose_callback(self, msg:Pose):
        self.robot_pose[0] = msg.x
        self.robot_pose[1] = msg.y
        self.robot_pose[2] = msg.theta

    def target_callback(self, msg:Pose):
        self.target_pose[0] = msg.x
        self.target_pose[1] = msg.y

def main(args=None):
    rclpy.init(args=args)
    node = BotNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
