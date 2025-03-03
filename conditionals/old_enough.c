//johann hines, old enough
#include <stdio.h>
int num = 16

int main(void){
   if (num > 16 && num < 21){
        if(num == 16){
            printf("%d is your age you can drive", num);
        }else{
    printf("%d is a large single digit number\n", num);
        }
    }else if (num > 10){
        printf("%d is not a single digit number\n");
    }else{
        printf("%d is a small single didgit number\n", num);
    }

    return 0;
}
