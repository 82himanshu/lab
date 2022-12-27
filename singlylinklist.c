#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *start = NULL;
void main()
{
    void creation();
    void traversing();
    void insertionatbegin();
    void insertionatend();
    void insertion_after_k_nodes();
    void deletion_at_begin();

    void deletion_at_end();
    void insertion_before_c_information();
    int n;

    while (1)
    {
        printf("enter choice 1 for creation and 2 for traversing and 3 for insertion and 4 for end 5 for after k nodse 6 for delation atbegina nd 7 for end\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            creation();
            break;
        case 2:
            traversing();
            break;
        case 3:
            insertionatbegin();
            break;
        case 4:
            insertionatend();
            break;
        case 5:

            insertion_after_k_nodes();
            break;
        case 6:
            deletion_at_begin();
            break;
        case 7:

            deletion_at_end();
            break;
        case 8:
            insertion_before_c_information();
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
void insertionatbegin()
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("overflow");
        return;
    }
    printf("enter data\n");
    scanf("%d", &new->info);
    new->link = start;
    start = new;
}
void insertionatend()
{
    struct node *new, *ptr;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("overflow");
        return;
    }
    printf("enter data\n");
    scanf("%d", &new->info);
    ptr = start;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = new;
    new->link = NULL;
}
void insertion_after_k_nodes()
{
    struct node *new, *ptr;

    int k, c = 1;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("overflow");
        return;
    }
    printf("enter data\n");
    scanf("%d", &new->info);
    printf("enter k\n");
    scanf("%d", &k);

    ptr = start;
    while (c != k)
    {
        ptr = ptr->link;
        c = c + 1;
    }
    new->link = ptr->link;
    ptr->link = new;
}
void deletion_at_begin()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("underflow");
        return;
    }
    ptr = start;
    start = start->link;
    printf("%d", ptr->info);
    free(ptr);
}
void deletion_at_end()
{
    struct node *ptr, *temp;
    ptr = start;
    while (ptr->link != NULL)
    {
        temp = ptr;
        ptr = ptr->link;
    }
    printf("%d", ptr->info);
    temp->link = NULL;
    free(ptr);
}
void insertion_before_c_information()
{
    struct node *new, *ptr, *temp;
    if (new == NULL)
    {
        printf("overflow\n");
        return;
    }
    new = (struct node *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d", &new->info);
    ptr = start;
    while (ptr->info != 45)
    {
        temp = ptr;
        ptr = ptr->link;
    }
    new->link = ptr;
    temp->link = new;
}