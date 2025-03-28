//Johann Hines financial calc
#include <stdio.h>
#include <math.h>

char name [1000];
float user_input(char*money){
    float value;
    printf("%s", money);
    scanf("%f", value);
    return value;
}
void print_result(char*item_name, float number, float income){
    float percentage = (number/income)*100;
    printf("%s, your monthly %s is $%.2f which is %.2f%% of your income!\n", name, item_name, number, percentage);
}
int main(void){
    float income, rent, utilities, groceries, transportation, savings, spendings;

    income = user_input("What is your income?: \n");
    rent = user_input("What is your rent?: \n");
    utilities = user_input("How much do your utilities cost?: \n");
    groceries = user_input("How much do your groceries cost?: \n");
    transportation = user_input("How much does transportation cost?: \n");
   
    savings = income*0.1;
    spendings = income-savings-rent-utilities-groceries-transportation;

    print_result("rent", rent, income);
    print_result("utilities", utilities, income);
    print_result("groceries", groceries, income);
    print_result("transportation", transportation, income);
    print_result("savings", savings, income);
    print_result("spendings", spendings, income);
   
    return 0;
}
