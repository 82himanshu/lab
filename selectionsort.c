#include <stdio.h>
void main()
{
    int a[20], i, n, j, p, min;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("enter array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("sorting");
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        a[i] = a[min];
        // printf("%d\n", a[i]);
    }
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}