//Functions in C
//Functions are defined outside of the main class - and called inside main class whenever it's required
#include <stdio.h>
#include <stdlib.h>

void sayName(char name[100]){
    printf("Entered name is - %s", name);
}

//this function isn't return anything so void will be okay
void addNum(double x, double y){
    printf("\nsum of %f & %f is %f", x,y,x+y);
}

//this function is returning the value so we have to define the data type of return value
double retNum(double x, double y){
    return(x+y);
    printf("Function executed"); //this code is never going to execute because it's written after a return statement
}

double cube(double num);

int main(){

    //sayName("Axay Patoliya");

    //addNum(10,11);

    //double retuAns = retNum(1,2);
    //printf("\n%f", retuAns);

    double ans = cube(3);
    printf("\nCube is - %f", ans);
}

//if we call this function in the main block it'll throws an error
//so we have to do for this function to run what we did in line 21
//it's always better to define a function at top of the main function
double cube(double num){
    return(num*num*num);
}
