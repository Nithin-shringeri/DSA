#include<stdio.h>
#include "header.h"

void linearqueueinit(linearqueue *q)
{
    q->front = -1;
    q->rear = -1;
}


int linearenque(linearqueue *q, int value)
{
    if(q->rear == SIZE - 1)
    {
        printf("Queue is full\n");
        return 0; 
    }

    if(q->front == -1)  q->front = 0;

    q->rear++;
    q->arr[q->rear] = value;
    printf("%d inserted into the queue.\n", value);
    return 1;
}

int lineardequeue(linearqueue *q, int *value)
{
    if(q->front == -1 || q->front > q-> rear)
    {
        printf("Queue is empty\n");
        return 0;
    }

    *value = q->arr[q->front];
    q->front++;

    return 1;

}

void linearqueuedisplay(linearqueue *q)
{
    if(q->front == -1 || q->front > q->rear)
    {
        printf("No elements to dispaly\n");
        return;
    }

    for(int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
    
    printf("\n");

}

