#include<stdio.h>
int main(){
    int count=0;
    long long n;
    scanf("%lld", &n);
    while(n!=0){
        if (n%10 == 4 || n%10 == 7)
        {
            count++;
        }
        n/=10;
    }

    if (count == 7 || count == 4)
    {
        printf("YES");
    }
    
    else
    {
        printf("NO");
    }
    

    
}