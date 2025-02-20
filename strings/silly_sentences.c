//johann hines, silly_sentences
#include <stdio.h>
#include <string.h>
int main(void){
char name[20];
char action[20];
char liquid[20];
char fruit[20];
    printf("hello, what is your name?\n");
    scanf ("%s", name);
    printf(name, "Welcome to my program\n");
    printf(", give me a silly action\n");
    scanf("%s", action);
    printf("Give me a liquid\n");
    scanf("%s", liquid);
    printf("tell me your favorite fruit\n");
    scanf("%s", fruit);
    printf ("when %s, was %s, He noticed a glass of %s,  he drank it and found a %s", name, action, liquid, fruit);

}