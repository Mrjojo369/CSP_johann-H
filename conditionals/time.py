#johann Hines, How to get the time of day. 

import time
#first instance of time in programming
#print(time.gmtime(0))

# #current time in se
current =time.time()

# current time as we are used to seeing it 
now = time.ctime(current)
print(now)

#get just the hour
local_time = time.localtime(current)
minutes = local_time.tm_min
Hour = local_time.tm_hour
print(local_time)
print (Hour)