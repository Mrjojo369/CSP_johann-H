//johann hines, name Decorator.c 
#include <stdio.h>
#include <string.h>
/// @brief 

char name[20];
char dec1[20] = "<<";
char dec2[20] = ">>";

int main(void){
 printf("please tell me your full name\n");
scanf("%s", name);
strcat(dec1, name);
strcat(dec1, dec2 );
printf("This is your name bedazled %s\n",dec1);
    return 0;
}