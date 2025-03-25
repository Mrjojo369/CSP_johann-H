 //johann hines, template
#include <stdio.h>


int main(void){
  int x;
  if (x % 5 == 0 && x % 3 == 0){
    printf("fizzbuzz");
  }else if (x % 5 == 0){
    printf("buzz");
  }else if (x % 3 == 0){
    printf("fizz");
  }else{
    printf("%d", x);
    return 0;
  }
}

