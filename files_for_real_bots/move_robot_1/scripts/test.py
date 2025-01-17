#!/usr/bin/env python

import math
import numpy as np
import rospy
# from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
# from move_robot.scripts.utils import lidar_scan, get_odom_position, get_odom_orientation, lidar_scan_xy
import sys
from Occ_map_scripts.bresenham import bresenham
# gridMap = 0.0
# resolution = 0.03
# X_lim = [-4,4]
# Y_lim = [-4,4]
# x = np.arange(start = X_lim[0], stop = X_lim[1] + resolution, step = resolution)
# y = np.arange(start = Y_lim[0], stop = Y_lim[1] + resolution, step = resolution)
# l = np.full(shape = (len(x), len(y)), fill_value = 0.5)
# print(np.shape(l))
# # print(l)
# # print(x)
# #print(len(x))
# l_d = (3.5*math.cos(0.785))
# #print(l_d)
# x_l = np.arange(start = X_lim[0], stop = l_d + resolution, step = resolution) + 5
# # print(x_l)
# # print(x_l-5)

# x1, y1, x2, y2 = 300,300,401,358
# for (x_bres, y_bres) in bresenham(gridMap, x1-x1, y1-y1, x2-x1, y2-y1):
#     l[x_bres][y_bres] = 0 

# gray_image =1 / (1 + np.exp(l))
# print(gray_image)
# rgb_image = np.repeat(a = gray_image[:,:,np.newaxis], 
# 							  repeats = 3,
# 							  axis = 2)
# # print(rgb_image)
# d = [[1,2,3],[3,4,5]]
# d_row = len(d)
# d_col = len(d[0])


# # for i in range(d_row):
# # 	for j in range(d_col):
# # 		d[i][j] = float(d[i][j])
# # # print(len(d[0]))
# # print(d)
# print(range(d_col))

# # d= [[float(d[i][j]) for j in range(4)] for i in range(0)]
# d = [[float(x) for x in d_sublist] for d_sublist in d]
# print(d)
#--------------------------------------------------------------------------------------------------------------------------
# def lasCallback(las_msg):
# 	# rospy.loginfo(las_msg)
# 	lm = las_msg
# 	while not rospy.is_shutdown():
# 		print("subscribed data: ",lm)
# 		rospy.sleep(0.1)

# if __name__ == '__main__':
#     try:

#         #Initialising the node
#         rospy.init_node('laser_subscriber')

#         # Create a subscriber on the topic "my_topic" with the message type Float64MultiArray
#         rospy.Subscriber('laser_mes', Float64MultiArray, lasCallback)

#         # Spin the node
#         rospy.spin()

#     #Interruption exceptions occured due to sleep() functions or any other
#     except rospy.ROSInterruptException:
#         pass

#----------------------------------------------------------------------------------------------------------------
# from filterpy.kalman import KalmanFilter
# dt = 0.1
# kf = KalmanFilter(dim_x=4, dim_z=2)
# kf.x = np.array([0, 0, 0, 0]) # initial state: x, y, vx, vy
# kf.P = np.eye(4) * 100 # initial covariance matrix
# kf.F = np.array([[1, 0, dt, 0], [0, 1, 0, dt], [0, 0, 1, 0], [0, 0, 0, 1]]) # state transition matrix
# kf.H = np.array([[1, 0, 0, 0], [0, 1, 0, 0]]) # observation matrix
# kf.R = np.array([[0.01, 0], [0, 0.01]]) # measurement noise covariance matrix
# print(kf)
# n = 5
# las_topic = "las_mes"
# for i in range(n):		
#     las_topic = las_topic.replace(las_topic,"las_mes"+"_"+str(i))
#     print(las_topic)

import numpy as np
from std_msgs.msg import Float32MultiArray

arr = Float32MultiArray()
arr.data = np.array([[1.0, 2.0, 3.0,4.0], [2.0,5.0,9.0,4.0], [5.0,6.0,7.0,4.0],[5.0,6.0,7.0,4.0],[5.0,6.0,7.0,4.0]], dtype=np.float32)

# Get the length of the data array
length = len(arr.data[0])
print(np.sum(arr.data))



