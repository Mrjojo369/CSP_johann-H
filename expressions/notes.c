//johann hines, expressions notes
#include <stdio.h>
// integers int when we set the variables and %d when we print
// floats have float when we set and the variable and %f when we print
// strings (words) char when we set the varianle and %s when we print
int mynum;
float percent;
int main(void){
    
    printf("type a number: \n");
    scanf("%d", &mynum);
    printf("you inputed%d\n", mynum);
    prnitf("give me a percent as a decimal; \n");
    scanf("%f\n", &percent);
    printf( "your percent is %f\n");
    return 0;
}