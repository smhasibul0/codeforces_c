#include<stdio.h>
#include<string.h>

int main(){
    int i, j, len;
    char s[100];
    gets(s);
    len = strlen(s);

    for (i = 0; i < len-1; i++)
    {
        for (j = 0; j < len-1-i; j++)
        {
            if (s[j]!= '+')
            {
                if (s[j]>=s[j+2])
                {
                    int temp;
                    temp = s[j];
                    s[j]= s[j+2];
                    s[j+2]= temp;

                }
                
            }
            
        }
        
    }
    puts(s);
    
    return 0;
    

    
    
}