//johann hines, Strings Notes.c
#include <stdio.h>
#include <string.h>
char decor[] = "what is your name";

int main(void){
    scanf("please tell me your full name:\n");
    scanf("%s", decor);
   // fgets(name, 20, stdin);
    //printf("Hello %s, welcome to my program", name);
   //char sentence[] = "The quick brown fox jumps over the lazy dog";
   //printf("%lu\n", strlen(sentence));
// printf("%lu\n", sizeof(sentence[16])); will always give one more than string length. 
//char one[] = "hello ";
//char two[] = "world!";
//char three[] = "This is my program";
//printf("%s\n", one);
//strcat(one, two);  //how to concatenate a string.
//printf("%s\n", one);
//strcat(three, one);
//printf("%s",three);
    return 0;

}