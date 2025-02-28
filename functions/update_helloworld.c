 //johann hines, update hello world
#include <stdio.h>
void names(char names[]){
    printf("Hello %s\n", names );
}
int main(void){
    char name_1 [50] = ("johan gillian") ;
    char name_2 [50] = ("dana white");
    char name_3 [50] = ("lecinnibon james");
    char name_4 [50] = ("quandale dingle the 3rd");
    char name_5 [50] = ("juandaledingle");
     names(name_1);
      names(name_2);
       names(name_3);
        names(name_4);
         names(name_5);
    return 0;
}