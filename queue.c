// Queue is a linear data structure
// queue follows FIFO(first in first out) decipline
// que can be implemented using arrays
// queue has 2 open sides, one is for inserting and one is for deleting

#include <stdio.h>
#define limit 5

int queue[limit];

int front = -1;
int rear = -1;

// inserting data
void enque(int x)
{
    if (rear == limit - 1)
    {
        printf("Queue is overflowed!\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = (front + 1) % limit;
        rear = (rear + 1) % limit;
        // rear++;
        queue[rear] = x;
    }
    else //qques is neither empty nor full in this case we will enter some data(shifting operation will take place here)
    {
        rear = (rear + 1) % limit;
        queue[rear] = x;
    }
}

// removing data
void deque()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow condition!\n");
    }
    else if (front == rear) //only one element in the queue
    {
        front = rear = 0;
    }
    else //more than 1 element in the queue
    {
        printf("deleted element is %d\n", queue[front]);
        front = (front + 1) % limit; //data only can be deleted from the front
    }
}

// display queue data
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("underflowed condition\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("element %d = %d\n", i, queue[i]);
        }
    }
}

// to check the front value
void peak()
{
    if (front == -1 && rear == -1)
    {
        printf("queue underflowed\n");
    }
    else
    {
        printf("data at the front is %d\n", queue[front]);
    }
}

// driver code
int main()
{
    enque(2);
    enque(1);
    enque(5);
    enque(10);
    enque(50);

    display();

    peak();

    deque();
    deque();
    deque();

    display();

    enque(12);
    enque(19);

    return 0;
}