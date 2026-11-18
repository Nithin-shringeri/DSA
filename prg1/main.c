#include <stdio.h>
#include "header.h"

int main()
{
    linearqueue lq;
    int choice, value;
    linearqueueinit(&lq);

    while (1)
    {
        printf("\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &value);
            linearenque(&lq, value);
            break;

        case 2:
            if (lineardequeue(&lq, &value))
            {
                printf("Dequeued value: %d\n", value);
            }
            break;

        case 3:
            linearqueuedisplay(&lq);
            break;

        case 4:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
