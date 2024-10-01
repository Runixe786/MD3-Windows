import ctypes
#import time

VK_LWIN = 0x5B
VK_A = 0x41

user32 = ctypes.windll.user32
#time.sleep(0.5)
user32.keybd_event(VK_LWIN, 0, 0, 0)
user32.keybd_event(VK_A, 0, 0, 0)
user32.keybd_event(VK_A, 0, 2, 0)
user32.keybd_event(VK_LWIN, 0, 2, 0)
