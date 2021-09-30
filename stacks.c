// Stacks are basically one sided open cylinders
// It follows LIFO(Last In First Out) decipline
// stack is a linear data structure
// stack can be implemented with arrays

#include <stdio.h>

int stack[5];
int pointer = -1;

int Push(int value)
{
    if (pointer == 4)
    {
        printf("Stack is overflowed!\n");
    }
    else
    {
        pointer++;
        stack[pointer] = value;
        printf("Pushed value is %d\n", value);
    }
}

int Pop()
{
    if (pointer == -1)
    {
        printf("stack is underflowed\n");
    }
    else
    {
        int item = stack[pointer];
        pointer--;
        printf("Popped value is %d\n", item);
    }
}

int Peek()
{
    if (pointer == -1)
    {
        printf("Stack is underflowed\n");
    }
    else
    {
        printf("Top element of the stack is %d\n", stack[pointer]);
    }
}

int Display()
{
    if (pointer == -1)
    {
        printf("Stack us underflowed\n");
    }
    else
    {
        for (int i = pointer; i >= 0; i--)
        {
            printf("%d element of stack is %d\n", i, stack[i]);
        }
    }
}

int main()
{
    Push(1);
    Push(2);
    Push(3);
    Push(4);
    Push(5);
    Push(6);

    // Pop();
    // Pop();
    // Pop();
    // Pop();
    // Pop();
    // Pop();

    Peek();

    Display();

    return 0;
}
