#include <stdio.h>
void main()
{
    int a[20], i, n, j, p;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("enter array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("sorting");
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[i] > a[i + 1])
            {
                p = a[i + 1];
                a[i + 1] = a[i];
                a[i] = p;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}