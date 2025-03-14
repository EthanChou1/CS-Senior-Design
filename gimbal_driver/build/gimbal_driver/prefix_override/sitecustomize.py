import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/bevyn/projects/gimbal/gimbal_driver/install/gimbal_driver'
