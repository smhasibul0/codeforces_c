#include <stdio.h>
int main()
{
    int n, i, Petya, Vasya, Tonya, count=0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &Petya, &Vasya, &Tonya);

        if ((Petya==1 && Vasya==1) || (Vasya==1 && Tonya==1) || (Petya==1 && Tonya==1))
        {
            count++;
        }
        
    }

    printf("%d", count);
    

    return 0;
}