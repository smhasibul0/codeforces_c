#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int len, i, j;
    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (s[j] >= s[j+1])
            {
                char temp;
                temp = s[j];
                s[j] = s[j+1];
                s[j+1]=temp;
            }
            
        }
        
    }

    int x, k;
    x=len;
    k=0;
    
    for (k = 0; k < len; k++)
    {
        if (s[k]==s[k+1])
        {
           x--;
        }
        
    }
    

    if (x%2 == 0)
    {
        printf("CHAT WITH HER!");
    }

    else
    {
        printf( "IGNORE HIM!");
    }
    
    
    

}