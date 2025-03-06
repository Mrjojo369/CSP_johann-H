 //johann hines, template
#include <stdio.h>


int main(void){
char siblings[][50] = {"hello brian", "Hello samantha", "hello amanda", "hello samira","hello juandale dingle","hello quandale dingle", "hello lebron james"};
int mlength = sizeof(siblings)/sizeof(siblings[0]);
int m = 0;
while(m<mlength){
    printf("%s\n", siblings[m]);
    m++;
}
    return (0);
}
