//johann hines, finacial calculator. 
#include <stdio.h>
char name [50];
char income [50];
char rent [50];
char utilities [50];
char groceries [50];
char transportation [50];

int main(void){
    printf("what is your name?\n");
    scanf ("%s", name);
    printf( "welcome to my financial calculator\n" );
    printf("how much do you make per month?\n");
    scanf("%s", income);
    printf("how much do you spend on rent each month?\n");
    scanf("%s", rent);
     printf("how much do you spend on utilities per month?\n");
     scanf("%s", utilities);
      printf("how much do you spend on groceries per month?\n");
      scanf("%s", groceries);
       printf("how much do you spend on transportation each month?\n");
       scanf("%s", transportation);


    return 0;
}