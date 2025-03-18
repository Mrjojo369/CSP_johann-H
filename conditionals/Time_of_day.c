//johann hines, template
#include <stdio.h>
#include <time.h>


int main(void){
 time_t now = time(NULL);
struct tm *tm_struct = localtime(&now);
int hour = tm_struct->tm_hour;
printf ("the time is %d\n", hour);
if (hour <= 12  ){
printf("Goodmorning user");
    }else if (hour < 12  && hour > 7  ){
printf ("good afternoon user");
    }else{ 
printf ("goodnight user");
    return 0;
}
}