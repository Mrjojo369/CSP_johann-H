//Johann Hines, conditionals notes c 
#include <stdio.h>
#include <string.h>

char name[] = "Johann";
int num = 7;
int main(void){
    if(strcmp(name, "johann") == 0){
        printf("Hello, not the best person in the world but you cool.\n");
    }else{
       printf("Hello %s, the best person in the world\n", name);
   }
// && = and
// || = or
// != = not 
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