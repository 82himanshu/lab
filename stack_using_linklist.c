#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *top = NULL;
void main()
{
    void insertion();
    void deletion();
    void traversing();
    int c;
    while (1)
    {
        printf("enter choice");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            traversing();
            break;
        defualt:
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
        printf("stack is full");
        return;
    }
    printf("enter data");
    scanf("%d", &new->info);
    if (top == NULL)
    {
        new->link = NULL;
        top = new;
    }
    else
    {
        new->link = top;
        top = new;
    }
}
void deletion()
{
    struct node *ptr;
    if (top == NULL)
    {
        printf("stack is empty");
        return;
    }
    ptr = top;

    printf("%d", ptr->info);
    top = top->link;
    free(ptr);
}
void traversing()
{
    struct node *ptr;
    ptr = top;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->info);
        ptr = ptr->link;
    }
}