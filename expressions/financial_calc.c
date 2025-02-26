//johann hines, finacial calculator. 
#include <stdio.h>
char name [50];
char income [50];
char rent [50];
int utilities [50];
int groceries [50];
int  transportation [50];
int savings [50];
int spending money [50];

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
    
savings = income * .2;
    expenses = rent + utilites + groceries + transportation;
    used = expenses - income - savings;
    printf("you bring in %.2f\n", income);
    printf("you spend about %.2f\n on expenses" , expenses);
    printf("you will save approximatly %.2f\n", savings);
    printf("you bring in %.2f\n", income);
    printf("you will have about%.2f\n for spending money", spending money);
    return 0;
}
