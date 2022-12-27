#include <stdio.h>
int a[70];

void mergesort(int, int);
void merge(int, int, int);
void main()

{

    int i, n, low, high;
    printf("enter n\n");
    scanf("%d", &n);
    low = 0;
    high = n - 1;
    printf("enter arrray\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    mergesort(low, high);
    printf("merge sort\n");
    for (i = low; i <= high; i++)
        printf("%d\n", a[i]);
}
void mergesort(int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(low, mid);
        mergesort(mid + 1, high);
        merge(low, mid, high);
    }
    return;
}
void merge(int low, int mid, int high)
{
    int n, c[50], j = mid + 1, k, i = low;
    n = high - low + 1;
    k = low;
    while (i <= mid && j <= high)
    {

        if (a[i] < a[j])
        {

            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++)
    {
        a[i] = c[i];
    }
}
