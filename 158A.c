#include <stdio.h>
int main()
{
    int n, k, i, count=0;
    scanf("%d %d", &n, &k);
    int a[n];
    k=k-1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i]>=a[k] && a[i]>0)
        {
            count++;
        }
        
    }

    printf("%d", count);
    
    

    return 0;
}