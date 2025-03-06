//johann hines, old enough
#include <stdio.h>
int num = 16;

int main(void){
   if (num > 16 && num < 21){
        if(num == 16){
            printf("%d is your age you can drive", num);
        }else{
    printf("%d is your age, you can not vote  \n", num);
        }
    }else if (num > 10){
        printf("%d you can go to school\n");
    }else{
        printf("%d you can get your learners permit\n", num);
    }

    return 0;
}
