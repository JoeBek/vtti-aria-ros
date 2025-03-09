import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/joe/vt/vtti/aria_ros_ws/install/aria_localization'
