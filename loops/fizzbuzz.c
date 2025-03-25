 //johann hines, template
#include <stdio.h>

int(x) =1;
int main(void){
while (x >0 && x < 51){
  if (x % 5 == 0 && x % 3 == 0){
    printf("fizzbuzz\n");
  }else if (x % 5 == 0){
    printf("buzz\n");
  }else if (x % 3 == 0){
    printf("fizz\n");
  }else{
    printf("%d\n", x);
  }
  x +=1;
}
    return 0;
}

  


