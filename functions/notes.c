//johann hines, expressions notes
#include <stdio.h>

void add(int numOne, int numTwo){
    printf("%d\n", numOne + numTwo);
}
char input(char type[20]){
 char answer[50];
 printf("please give me a %s;\n",type);
 scanf("%s", answer);
 return answer;
}


int main(void){
   // printf("hello world\n");
   // add(4,9);
    //add(5,10);
   // add(1,99);
   // add(5,7);
    input("name");
    input("verb");
    input("place");
    printf("%s was %s untill they somehow reached %s", input("name"), input("verb"), input("place"));
    return 0; 
}