#include <stdio.h>
void main()
{
    int a[10], i, n, temp, j;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("enter array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("sorted array\n");
    for (i = 0; i < n - 1; i++)
    {
        j = i + 1;
        temp = a[j + 1];
        while (j >= 0 && temp < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

}