#include <stdio.h>
void main()
{
    int a[20], in[20], ei[20], i, j, n, gs, j = 0, k = 0;
    printf("enter size of array\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        printf(')
    printf("enter group size\n") ;
    scanf("%d",&gs);
    while (i < n)
    {
        in[k] = i;
        ei[j] = a[i];
        i = i + gs;
        j++;
        k++;
    }
}