//WHILE loops in C
//C always checks the condition inside the while loop before executing code inside it - if condition is true
//then and then only code inside the while loop is going to execute

#include <stdio.h>
#include <stdlib.h>

void printUntill(int rng){
    //do...while loop will always executes the code inside do block once and then checks the condition
    //if condition is true then it will executes the code inside do block further
    do {
        printf("%d\n", rng);
        rng++;
    } while (rng<=17);
}

int main(){

    int index = 0;
    while(index <= 5){
        printf("%d\n", index);
        index++;
    }

    printUntill(20);
}
