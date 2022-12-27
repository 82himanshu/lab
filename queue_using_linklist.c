#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *rear = NULL;
struct node *front = NULL;
void main()
{
    void insertion();
    void deletion();

    int c;
    while (1)
    {
        printf("enter choice\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        default:
            exit(1);
        }
    }
}
void insertion()
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("overflow");
        return;
    }
    printf("enter data");
    scanf("%d", &new->info);
    new->link = NULL;
    if (rear == NULL)
    {
        front = new;
        rear = new;
    }
    else
    {
        rear->link = new;
        rear = new;
    }
}
void deletion()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("queue is empty");
        return;
    }
    printf("%d", front->info);
    if (front == rear)
    {
        front = NULL;
        rear = NULL;
    }
    else
    {
        front = front->link;
    }
    free(ptr);
}