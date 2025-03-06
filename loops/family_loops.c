 //johann hines, template
#include <stdio.h>


int main(void){
char siblings[][50] = {"brian", "samantha", "amanda", "samira","juandale dingle","quandale dingle", "lebron james"};
int mlength = sizeof(siblings)/sizeof(siblings[0]);
int m = 0;
while(m<mlength){
    printf("hello,%s\n", siblings[m]);
    m++;
}
    return (0);
}