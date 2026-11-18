#include <stdio.h>
#include "header.h"

int queue[SIZE];
int front = -1;
int rear = -1;


void enqueue(int value)
{
    if(rear == SIZE - 1)
    {
        printf("Over flow\n");
        return;
    }

    if(front == -1)
    {
        front = 0;
    }

    rear++;
    queue[rear] = value;
    printf("Inserted: %d\n", value);
}

void dequeue(void)
{
    if(front == -1)
    {
        printf("Under flow\n");
        return;
    }

    printf("Deleted: %d\n", queue[front]);

    if(front == rear)
    {
        front = -1;

        rear = -1;                                                                                                                                    
    }
    else    
    {
     front++;   
    }
    
}

void display(void)
{
    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    for(int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}