//johann hines, expressions notes
#include <stdio.h>
#include <math.h> //This lets us do exponants. 
// integers int when we set the variables and %d when we print
// floats have float when we set and the variable and %f when we print
// strings (words) char when we set the varianle and %s when we print
int mynum;
float percent;
int add = 4+6;
 int sub = 4-6;
 int mul = 4*6;
 float div = 6/4;
 int mod = 4%6;
 float ex = pow( 5, 2);


 int main(void){   
   // printf("type a number: \n");
    //scanf("%d", &mynum);
    //printf("you inputed%d\n", mynum);
    //printf("give me a percent as a decimal; \n");
    //scanf("%f\n", &percent);
    //printf( "your percent is %f\n");
   printf("%d\n", add);
   printf("%d\n", sub);
   printf("%d\n", mul);
   printf("%.3f\n", div);
   printf("%d\n", ex);
   
    return 0;}