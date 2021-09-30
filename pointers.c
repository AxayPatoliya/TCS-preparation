//POINTERS in C
//pointers is type of data that we use in program & it's a memory address

//when we creates a pointer variable we have to store the memory address of the variable used in
//program, inside that pointer variable
//keep the data type of a pointer variable same as the data type of a variable whose address we're storing
//use "%p" to print the pointer in printf() function

#include <stdio.h>
#include <stdlib.h>

//function for recursion factorial code
int factorial(int num){
    if(num==0){
        return 1;
    }else{
        return num * factorial(num-1);
    }
}

int main(){

    char name[20] = "Axay Patoliya";
    printf("%p", &name); //the memory address this prints is a pointer
    //let's create a pointer - which stores the memory address of variable "name"
    int *pointerName = &name;

    double gpa = 3.89;
    double *pointerGpa = &gpa;

    int age = 22;
    int *pointerAge = &age;


    //dereferencing the pointer-variables is no more a pointer(memory address)
    //let's dereference the pointer variable "pointerGpa"
    printf("\n%f", *pointerGpa); //now we have to print out a number instead of a pointer
    printf("\n%s", *pointerName);
    printf("\n%d", *pointerAge);

    //factorial code - simple way
//    printf("enter the number");
//    int num;
//    scanf("%d", &num);
//    int factorial = 1;
//    for(int i = 1; i<=num; i++){
//        factorial = factorial*i;
//    }
//    printf("%d", factorial);

    //factorial code - recursion way
    // printf("Enter the number(recur)");
    // int fac_num;
    // scanf("%d", &fac_num);
    // printf("Answer of factorial number recur is %d", factorial(fac_num));

    return 0;
}
