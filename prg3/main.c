
#include <stdio.h>

#define SIZE 5

int data[SIZE];
int priority[SIZE];
int count = 0;

void insert(int value, int p)
{
    if (count == SIZE)
    {
        printf("Priority queue is full\n");
        return;
    }

    data[count] = value;
    priority[count] = p;
    count++;

    printf("Inserted successfully\n");
}

void deleteHighestPriority(void)
{
    int i, highest = 0;

    if (count == 0)
    {
        printf("Priority queue is empty\n");
        return;
    }

    for (i = 1; i < count; i++)
    {
        if (priority[i] < priority[highest])
            highest = i;
    }

    printf("Deleted: %d\n", data[highest]);

    for (i = highest; i < count - 1; i++)             
    {
        data[i] = data[i + 1];
        priority[i] = priority[i + 1];
    }

    count--;
}

void display(void)
{
    int i;

    if (count == 0)
    {
        printf("Priority queue is empty\n");
        return;
    }

    printf("Value\tPriority\n");

    for (i = 0; i < count; i++)
        printf("%d\t%d\n", data[i], priority[i]);
}

int main(void)
{
    int choice, value, p;

    while (1)
    {
        printf("\n1. Insert\n");
        printf("2. Delete highest priority\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1)
            return 1;

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1)
                    return 1;

                printf("Enter priority (smaller = higher): ");
                if (scanf("%d", &p) != 1)
                    return 1;

                insert(value, p);
                break;

            case 2:
                deleteHighestPriority();
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
