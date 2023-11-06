#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s[100];
    gets(s);
    int len, i;
    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        if (s[i]!= 'A' && s[i]!= 'a' && s[i]!= 'E' && s[i]!= 'e' && 
            s[i]!= 'I' && s[i]!= 'i' && s[i]!= 'O' && s[i]!= 'o' && 
            s[i]!= 'U' && s[i]!= 'u' && s[i]!= 'Y' && s[i]!= 'y')
        {
           printf(".%c", tolower(s[i]) );
            
        }
        else
        {
            continue;
        }
        
        
    }
    

}