//johann hines, template
#include <stdio.h>
int num = 16

int main(void){
   if (num > 5 && num < 10){
        if(num == 7){
            printf("%d is an unlucky number", num);
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
