// actual parameter -> add(x,y); the int x and int y are the actual parameters which we gives to the function
// formal parameter -> int add(int a, int b){return a+b; return 0;} copy of the actual parameters x&y will be stored to the function's attribute and it will not effect the actual parameter

// types of function call in C Programming
// 1.) CALL BY VALUE - we passes the value itself to the function(actual value will no be changed in this call)
// 2.) CALL BY REFERENCE - we passes the address of the values to the function(actual value will be changed in this call)

#include <stdio.h>

// call by value
int swap_val(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("%d ", x);
    printf("%d\n", y);
}

// call by reference
int changeValue(int *address1, int *address2)
{
    int temp;
    temp = *address1; //temp = value at address1
    *address1 = *address2;
    *address2 = temp;
    printf("%d ", *address1);
    printf("%d\n", *address2);
}

// sum using call by reference
int sumReference(int *add1, int *add2)
{
    int a = *add1 + *add2;
    int b = *add1 - *add2;
    printf("sum of numbers %d and %d is %d\n", *add1, *add2, a);
    printf("subtraction of numbers %d and %d is %d\n", *add1, *add2, b);
}

int main()
{
    // call by value implementation
    int a = 3, b = 4;
    swap_val(3, 4);

    // call by reference implementation
    int k = 12, j = 13;
    changeValue(&k, &j); //passed the address of k to the function changeValue

    sumReference(&k, &j);
    return 0;
}