 //johann hines, loops notes.c
#include <stdio.h>


int main(void){
//1. What is a loop? 
    // a section of code that repeats 
//2. What are the two types of loops?
    //for loop
    int x;
    for(x=0; x<10;x++){
        printf("hello\n");
    }
    // while loops. 
    int i=1;
    while(i<10){
        printf("%d\n",i);
        i++;
    }
//3. What is iteration
    // the act of repeating 
    //refrence an iteration as a specific time through the loop 

//4. What are lists?(in c lists are known as arrays) 
    //a list is a bunch of vales in one variable.
    
    //8. How do you make lists(arrays) in C?
    int grades[] = {97, 95, 100, 70, 94, 98, 64};
    //in the brakets we say how long the list will be, if we set the list there brackets can be blank 
    // data type is whatever is in the list (all must stay the same data type)
    // list items are surrounded by curly brackets{} with commas between each item 
    printf("%d\n", grades[3]); // to print one item we put the index of the vale in the brackets when we print 
    //how to change a value in a list 
    grades[2] = 73; // update grades one at a time using the index number 
    printf("%d\n", grades[2]);
    // this gives the number of bytes a string takes
    printf("%lu", sizeof(grades));
// how to ge the size of an array(list)
int length = sizeof(grades)/sizeof(grades[0]);
printf("%d\n", length);
//9. How do you make for loops in C?
// iterators should be x or i 
int t;
//in parenthasis 1. starting point 2. end point/go until point 3. what we count by 
for(t=0;t<=10;t+=2){
    printf("%d\n", t);
}
int l; 
for(l=0;l<length;l++){
    printf("%d\n", grades[l]);
}


//10. How do you make while loops in C?

int iterator = 100;
//while line sets the stop point/ how long it goes 
while(iterator >=0){

    printf("%d\n", iterator);
// sets what you count by
    iterator -= 10;
}
//How to make a list in loops
char movies[][20] = {"Cinderella", "The Smerf Movie", "Transformers", "Cars", "Up", "1984"};
int mlength = sizeof(movies)/sizeof(movies[0]);
int m = 0;
while(m<mlength){
    printf("%s\n", movies[m]);
    m++;
}

    return 0;
}