 //johann hines, template
#include <stdio.h>
#include <time.h>


int main(void){
    // time since jan 1 1970
    time_t seconds; 

    seconds = time(NULL);
    //printf("seconds since january 1, 1970 = %d\n", seconds);
    

// current time
    time_t rawtime; 
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("Our current time and date is %s\n", asctime(timeinfo));


// current hour
time_t now = time(NULL);
struct tm *tm_struct = localtime(&now);
int hour = tm_struct->tm_hour;
printf("%d\n", hour);
return 0;
}