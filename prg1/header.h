#ifndef HEADER_H
#define HEADER_H


#define SIZE 5

typedef struct 
{
    int arr[SIZE];
    int front;
    int rear;

}linearqueue;

void linearqueueinit(linearqueue *q);
int linearenque(linearqueue *q, int value);
int lineardequeue(linearqueue *q, int *value);
void linearqueuedisplay(linearqueue *q);

#endif