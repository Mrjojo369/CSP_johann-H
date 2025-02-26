//johann hines, finacial calculator. 
#include <stdio.h>
char name [50];
float income [50];
 float rent [50];
float utilities [50];
float groceries [50];
float  transportation [50];

int main(void){
    printf("what is your name?\n");
    scanf ("%s", name);
    printf( "hello, %s welcome to my financial calculator\n", name);
    printf("how much do you make per month?\n");
    scanf("%f", income);
    printf("how much do you spend on rent each month?\n");
    scanf("%f", rent);
     printf("how much do you spend on utilities per month?\n");
     scanf("%f", utilities);
      printf("how much do you spend on groceries per month?\n");
      scanf("%f", groceries);
       printf("how much do you spend on transportation each month?\n");
       scanf("%f", transportation);
     printf (rent/income)*100;
     printf  (utilities/income)*100;
     printf (groceries/income)*100;
     printf  (transportation/income)*100;


    return 0;
}