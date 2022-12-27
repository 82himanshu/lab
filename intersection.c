#include <stdio.h>
void main()
{
    int a[20], b[20], c[20], i, j, m, n, k = 0, p = 0, q = 0;
    printf("enter size of first array\n");
    scanf("%d", &m);
    printf("enter 1st array\n");

    for (i = 0; i <= m - 1; i++)
        scanf("%d", &a[i]);
    printf("enter size of 2nd array\n");
    scanf("%d", &n);
    printf("enter 2nd array\n");
    for (i = 0; i <= n - 1; i++)
        scanf("%d", &b[i]);
    while (p < m && q < n)
    {
        if (a[p] == b[q])
        {
            c[k] = a[p];
            k++;
            p++;
            q++;
        }
    }
    while (p < m)
    {
        c[k] = a[p];
        k++;
        p++;
    }
    while (q < n)
    {
        c[k] = b[q];
        k++;
        q++;
    }
    printf("intersection\n");
    for (i = 0; i < k; i++)
        printf("%d\n", c[i]);
}
