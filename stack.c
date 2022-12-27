#include <stdio.h>
#include <stdlib.h>

int stack[20], max, top = -1, c;
void main()
{

    void push();

    void pop();
    void traverse();

    printf("enter maximum size of stack\n");
    scanf("%d", &max);
    while (1)
    {
        printf("enter choice\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
            break;
        }
    }
}
void push()
{
    if (top == max - 1)
    {
        printf("over flow\n");
        return;
    }
    else
    {
        top = top + 1;
        printf("enter element");
        scanf("%d\n", &stack[top]);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("under flow\n");
        return;
    }
    else
    {
        printf("%d\n", stack[top]);
        top = top - 1;
    }
}
void traverse()
{
    int i = 0;

    for (i = 0; i <= top; i++)
        printf("%d", stack[i]);
}
