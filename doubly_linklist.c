#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *left;
    struct node *right;
};
struct node *start = NULL;
void main()
{

    void creation();
    void traversing();
    void insertion_at_begin();
    void insertionat_end();
    void insertion_after_knode();
    void deletion_at_begin();
    void deletion_at_end();

    int c;

    while (1)
    {
        printf("enter choice 1 for creation and 2 for traversing and 3 for insertion_at_begin and 4 for insretion-at_end 5 for after k nodse 6 for delation_at_begina and 7 for deletion_at_end 8 for insertion before c information\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            creation();

            break;
        case 2:
            traversing();
            break;
        case 3:
            insertion_at_begin();
            break;
        case 4:
            insertionat_end();
            break;
        case 5:
            insertion_after_knode();
            break;
        case 6:
            deletion_at_begin();
            break;
        case 7:
            deletion_at_end();
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
    ptr->left = NULL;
    start = ptr;

    printf("enter choice 1 for continue and 0 for stop\n");
    scanf("%d", &ch);
    while (ch == 1)
    {
        cpt = (struct node *)malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d", &cpt->info);
        ptr->right = cpt;
        cpt->left = ptr;
        ptr = cpt;
        printf("enter 1 for continue and 0 for stop\n");
        scanf("%d", &ch);
    }
    ptr->right = NULL;
}
void traversing()
{
    struct node *ptr, *temp;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->info);
        temp = ptr;
        ptr = ptr->right;
    }
    /*while (temp != NULL)
     {
         printf("%d\n", temp->info);
         temp = temp->left;
     }*/
}
void insertion_at_begin()
{
    struct node *new, *ptr;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("over flow");
        return;
    }
    ptr = start;
    printf("enter data");
    scanf("%d", &new->info);
    new->left = NULL;
    start->left = new;
    new->left = NULL;
    new->right = start;
    start = new;
}
void insertionat_end()
{
    struct node *new, *ptr;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("over flow");
        return;
    }

    ptr = start;
    printf("enter data");
    scanf("%d", &new->info);
    while (ptr->right != NULL)
    {
        ptr = ptr->right;
    }
    ptr->right = new;
    new->left = ptr;
    new->right = NULL;
}
void insertion_after_knode()
{
    struct node *new, *ptr, *temp;
    int count = 1, k;
    new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("over flow");
        return;
    }
    printf("enter k");
    scanf("%d", &k);

    ptr = start;
    printf("enter data");
    scanf("%d", &new->info);
    while (count != k)
    {
        ptr = ptr->right;
        count++;
    }
    temp = ptr->right;
    temp->left = new;
    new->right = ptr->right;
    new->left = ptr;
    ptr->right = new;
}
void deletion_at_begin()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("under flow");
        return;
    }
    ptr = start;
    start = start->right;
    start->left = NULL;
    printf("%d", ptr->info);
    free(ptr);
}
void deletion_at_end()
{
    struct node *ptr, *temp;
    if (start == NULL)
    {
        printf("under flow");
        return;
    }
    ptr = start;
    while (ptr->right != NULL)
    {
        temp = ptr;
        ptr = ptr->right;
    }
    temp->right = NULL;
    printf("%d", ptr->info);
    free(ptr);
}
