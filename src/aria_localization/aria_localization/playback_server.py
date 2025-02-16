import rclpy
from rclpy.node import Node

from std_msgs.msg import Float32MultiArray, Float32
from geometry_msgs.msg import Quaternion

from AriaIO import AriaData
from aria_localization.srv import Start

class Playback_Node(Node):

    def __init__(self):
        super().__init__('playback_node')

        # publishers for localization data
        self.translation_pub = self.create_publisher(Float32, 'tranlation', 10)
        self.rotation_pub = self.create_publisher(Float32MultiArray, 'rotation', 10)


        # service call for playback option I/O
        self.srv = self.create_service(Start, 'start_playback', self.start_playback)
        self.index = 0
        # todo add ros parameters for path, frequency
        self.data = AriaData()
        self.publishing_trajectory = False
    
    def start_playback(self, request, response):
        '''
        request: no parameters, only call 
        response: success, no success

        starts the playback from index 0

        '''
        optval = request.optval

        # switch optval

        #zero false, means stop
        if optval == 0:
            self.publish_trajectory = False
        #one means go
        elif optval == 1:
            self.publish_trajectory = True
        # -1 means restart
        elif optval == -1:
            self.index == 0




        self.publishing_trajectory = True
        response.success = True
        return response

    def publish_trajectory(self):
        '''
        publishes trajectory by index
        '''

        if not self.publishing_trajectory:
            return
        self.index += 1

        # publish translation vector
        translation = Float32MultiArray()
        translation.data = [self.data.translation_vector[self.index][0],
                            self.data.translation_vector[self.index][1],
                            self.data.translation_vector[self.index][2]]
        self.translation_pub.publish(translation)

        #publish rotation vector
        rotation = Quaternion()
        rotation.x = self.data.rotation_vector[self.index][0]
        rotation.y = self.data.rotation_vector[self.index][1]
        rotation.z = self.data.rotation_vector[self.index][2]
        rotation.w = self.data.rotation_vector[self.index][3]
        self.rotation_pub.publish(rotation)



 
 def main(args=None):
    rclpy.init