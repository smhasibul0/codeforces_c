#include<stdio.h>
int main(){
    int n, h, i, x, len=0;
    scanf("%d %d", &n, &h);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x>h)
        {
            len = len+2;
        }
        else
        {
            len++;
        }  
    }

    printf("%d", len);
    
}