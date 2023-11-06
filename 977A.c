#include<stdio.h>
int main()
{
    int n,k,r,i;
    scanf("%d %d",&n,&k);
    for(i=1; i<=k; i++)
    {
        r=n%10;
        if(r==0)
        {
            n=n/10;
        }
        else
            n=n-1;
    }
    printf("%d\n",n);

    return 0;
}