//johann hines, finacial calculator. 
#include <stdio.h>
char name [50];
char income [50];
char rent [50];
int utilities [50];
int groceries [50];
int  transportation [50];

int main(void){
    printf("what is your name?\n");
    scanf ("%s", name);
    printf( "hello, %s welcome to my financial calculator\n", name);
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
     printf(rent/income)*100;
     printf(utilities/income)*100;
     printf(groceries/income)*100;
     printf(transportation/income)*100;


    return 0;
}