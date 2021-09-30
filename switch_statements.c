//SWITCH statements in C
//using switch we can compare one value with many values and accordingly we can execute the code
//if any one switch statement gets executed, 'break;' will brake the upcoming switch statements

#include <stdio.h>
#include <stdlib.h>

int main(){

    char grade = 'A';
    switch(grade){
    case 'A':
        printf("You did well");
        break;

    case 'B':
        printf("You can do little better");
        break;

    case 'C':
        printf("You can do it even better");
        break;
    default: //default is like else. if none of the switch conditions are true then it will execute the code inside default
        printf("Please enter a valid grade");
    }

}


