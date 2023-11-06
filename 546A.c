#include<stdio.h>
int main(){
    int k, n, w, i, price = 0,x;
    scanf("%d %d %d", &k, &n, &w);
    for (i = 1; i <= w ; i++)
    {
        price = price + (i*k);
    }

    x = price - n;

    if (x<=0)
    {
        printf("0");
    }

    else
    {
        printf("%d", x);
    }
    
    
}