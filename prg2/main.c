#include <stdio.h>
#include "header.h"

int main()
{
    int choice, val;

    while (1)
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1)
            return 1;

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            if (scanf("%d", &val) != 1)
                return 1;
            enqueue(val);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}