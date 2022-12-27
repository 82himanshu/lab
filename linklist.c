#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *start;
void main()
{
    void creation();
    void traversing();
    int n;

    while (1)
    {
        printf("enter choice 1 for creation and 2 for traversing\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            creation();
            break;
        case 2:
            traversing();
            break;
        default:
            exit(1);
        }
    }
}
void creation()
{
    int ch;
    struct node *ptr, *cpt;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("enter data for ptr\n");
    scanf("%d", &ptr->info);

    start = ptr;
    printf("enter choice 1 for continue and 0 for stop\n");
    scanf("%d", &ch);
    while (ch == 1)
    {
        cpt = (struct node *)malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d", &cpt->info);
        ptr->link = cpt;
        ptr = cpt;
        printf("enter 1 for continue and 0 for stop\n");
        scanf("%d", &ch);
    }
    ptr->link = NULL;
}
void traversing()
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->info);
        ptr = ptr->link;
    }
}