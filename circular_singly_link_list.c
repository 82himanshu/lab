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
        printf("enter choice 1 for creation and 2 for traversing and 3 for insertion_at_begin and 4 for insretion-at_end 5 for after k nodse 6 for delation_at_begina and 7 for deletion_at_end 8 for insertion before c information\n");
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
    ptr->link = start;
    start = ptr;
}
void traversing()
{
    struct node *ptr;
    ptr = start->link;
    while (ptr != start)
    {
        printf("%d\n", ptr->info);
        ptr = ptr->link;
    }
    printf("%d", ptr->info);
}
void insertionatbegin()
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

    new->link = start->link;
    start->link = new;
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

    new->link = start->link;
    start->link = new;
    start = new;
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
    ptr = start->link;
    while (c != k)
    {
        ptr = ptr->link;
        c++;
    }
    new->link = ptr->link;
    ptr->link = new;
}
void deletion_at_begin()
{
    if (start == NULL)
    {
        printf("under flow\n");
        return;
    }

    struct node *ptr;
    ptr = start->link;
    start->link = ptr->link;
    printf("%d", ptr->info);
    free(ptr);
}
void deletion_at_end()
{
    struct node *ptr, *temp;
    if (start == NULL)
    {
        printf("under flow\n");
        return;
    }
    ptr = start->link;
    while (ptr->link != start)
    {
        ptr = ptr->link;
    }
    temp = ptr->link;
    ptr->link = start->link;
    start = ptr;
    printf("%d", temp->info);
    free(temp);
}
void insertion_before_c_information()
{
    struct node *new, *ptr, *temp;

    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("overflow");
        return;
    }
    printf("enter data\n");
    scanf("%d", &new->info);
    ptr = start->link;
    while (ptr->info != 45)
    {
        temp = ptr;
        ptr = ptr->link;
    }
    temp->link = new;
    new->link = ptr;
}