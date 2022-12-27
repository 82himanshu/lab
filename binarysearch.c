#include <stdio.h>
void main()
{
    int a[49], n, i, s, e, m, t;
    printf("enter array size\n");
    scanf("%d", &n);
    printf("enter array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    s = 0;
    e = n - 1;
    m = (s + e) / 2;
    printf("enter key\n");
    scanf("%d", &t);
    while (a[m] != t && s <= e)
    {
        if (t > a[m])
            s = m + 1;
        else
            e = m - 1;
        m = (s + e) / 2;
    }
    if (t == a[m])
        printf("found");
    else
        printf("not found");
}