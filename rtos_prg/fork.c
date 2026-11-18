#include <stdio.h>
#include <unistd.h>

int myname(int i, int j)
{
    // int sum;
    // sum = i + j;
    printf("%d", i + j);
    return 0;
}

int main()
{

    printf("Before fork()\n");

    fork();

    myname(10, 50);

    printf("\n");

    fork();

    fork();

    printf("After fork()\n");

    return 0;
}
