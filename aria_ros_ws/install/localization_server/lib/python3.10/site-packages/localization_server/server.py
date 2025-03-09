import rclpy
from rclpy.node import Node

from std_msgs.msg import Float32MultiArray, Float32
from geometry_msgs.msg import Quaternion
from aria_localization.srv import Start


class LocalizationServer(Node):
    super().__init__("Localization_Server")

    def __init__(self):
        # Subscribers for localization data
        self.translation_sub = self.create_subscription(
            Float32MultiArray,
            'tranlation',
            self.translation_callback,
            10
        )
        self.rotation_sub = self.create_subscription(
            Quaternion,
            'rotation',
            self.rotation_callback,
            10
        )

        # optional service client for playback control
        self.cli = self.create_client(Start, 'playback_control')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        self.req = Start.Request()

    
    def rotation_callback(self,msg):
        self.get_logger().info(f'Received translation: {msg.data}')

    def rotation_callback(self, msg):
        self.get_logger().info(f'Received rotation: x={msg.x}, y={msg.y}, z={msg.z}, w={msg.w}')

    def send_request(self, optval):
        self.req.optval = optval
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
        

def main(args=None):
    rclpy.init(args=args)

    server = LocalizationServer()
    response = server.send_request(1)

    rclpy.spin(server)
    server.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()


