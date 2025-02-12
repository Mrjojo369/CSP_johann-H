//johann hines, name Decorator.c 
#include <stdio.h>
#include <string.h>
/// @brief 

char name[20] = "what is your name?";
char dec1[20] = "<<";
char dec2[20] = ">>";

int main(void){
 printf("please tell me your full name\n");
scanf("%s", name);
strcat(dec1, name);
strcat(dec2, name);
printf("This is your name bedazled", );
    return 0;
}