#include <stdio.h>
void main()
{
    int a[20], b[20], c[20], i, j, m, n, k = 0, flag = 0;
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
    for (i = 0; i < m; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            c[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}
