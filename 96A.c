#include<stdio.h>
#include<string.h>
int main(){
    int i, j, len, pl=0;
    char s[100];
    gets(s);
    len= strlen(s);

    for (i = 0; i < len; i++)
    {
        if (s[i]==s[i+1] && s[i+1]==s[i+2] && s[i+2]== s[i+3] && s[i+3]==s[i+4] &&
            s[i+4]==s[i+5] && s[i+5]==s[i+6])
        {
            pl=1;
        }
    }

    if(pl==1){
        printf("YES");
    }

    else
    {
        printf("NO");
    }
    
    
}