#include<stdio.h>
int main(){
    
    int n, fnd;
    scanf("%d", &fnd);

    n = fnd/5;

    if (fnd%5==0)
    {
        printf("%d", n);
    }

    else
    {
        printf("%d", n+1);
    }
    
    

}