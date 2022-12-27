#include <stdio.h>
void main()
{
    int a[5], i, k;
    printf("enter array\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("enter key\n");
    scanf("%d,&k");
    for (i = 0; i < 5; i++)
    {
        if (k == a[i])
        {
            printf("key  found");
            break;
        }
    }
    if (i== 5)
        printf("key not  found");
}