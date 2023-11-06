#include<stdio.h>
int main(){
    int n, i, in, out, pass=0, max=0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &out, &in);
        pass = pass+in-out;
        if (pass>max)
        {
            max = pass;
        }
        
    }
    printf("%d", max);
}