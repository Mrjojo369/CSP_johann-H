#Johann Hines, time of day python.
import time 

current =time.time()
local_time = time.localtime(current)
minutes = local_time.tm_min
Hour = local_time.tm_hour
if Hour <= 12:
    print("Goodmorning user")
elif Hour < 12 & Hour < 6 : 
    print("Good afternnon user")
else:
    print("Goodnight user")