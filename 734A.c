#include<stdio.h>
#include<string.h>
int main(){
    int n,i,a=0,d=0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for (i = 0; i < n; i++)
    {
        if (s[i]== 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }

    if (a>d)
    {
        printf("Anton");
    }
    else if (a==d)
    {
        printf("Friendship");
    }
    else
    {
        printf("Danik");
    }
    
}