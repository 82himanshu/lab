#include <stdio.h>
#include <stdlib.h>
int a[45], front, rear, data, max = 10, item;
void main()
{
    void insertion();
    void traversing();
    void deletion();
    int i, n;
    front = -1;
    rear = -1;

    while (1)
    {
        printf("enter operation");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insertion();
        case 2:
            deletion();
        case 3:
            traversing();
        case 4:
            exit(0);
        }
    }
}
void insertion()
{
    if (rear == max - 1)
    {
        printf("over flow\n");
        return;
    }
    if (rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    printf("enter data\n");
    scanf("%d", &data);
    a[rear] = data;
}
void deletion()
{
    if (front == -1)
    {
        printf("under flow");
        return;
    }
    item = a[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = front + 1;
    }
}
void traversing()
{
    int i;
    for (i = front; i <= rear; i++)
        printf("%d", a[i]);
}