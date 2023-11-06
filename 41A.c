#include<stdio.h>
#include<string.h>
int main(){
    int i, len,temp;
    char s[101];
    gets(s);
    len=strlen(s);
    char t[101];
    gets(t);
    
    for (i = 0; i < len/2; i++)
    {
        temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }

    int value = strcmp(t,s);

    if (value == 0)
    {
        printf("YES");
    }
    
    else
    {
        printf("NO");
    }
    
    
}