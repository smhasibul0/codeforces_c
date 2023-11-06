#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i, upper=0, lower=0, len;
    char s[100];
    gets(s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            upper++;
        }

        else
        {
            lower++;
        }
        
        
    }

    if (upper>lower)
    {
        for (i = 0; i < len; i++)
        {
            s[i] = toupper(s[i]);
        }
        
    }

    else
    {
        for (i = 0; i < len; i++)
        {
            s[i] = tolower(s[i]);
        }
        
    }

    puts(s);
    
    
    
}