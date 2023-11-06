#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[1000];
    gets(s);

    s[0]= toupper(s[0]);
    puts(s);

}