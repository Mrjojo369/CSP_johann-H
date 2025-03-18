//johann hines, old enough
#include <stdio.h>
int num = 16;

int main(void){
   if (num >= 18){
            printf("%d you can vote",num);
    }else if (num >= 16){
        printf("%d is your age, you are old enough to drive\n", num);
    }else if (num == 15){ 
        printf("%d is your age, you can get your learners permit\n", num);
    }else if (num < 15 && num > 4){
        printf("You can go to school");
    }else{
        printf("You are too young for anything")
    }
    return 0;
}
