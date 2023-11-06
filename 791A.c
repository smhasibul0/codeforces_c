#include<stdio.h>
int main(){
    int limak, bob, i, year = 0;
    scanf("%d %d", &limak,&bob);
    if (limak<=bob)
    {
        while (limak<=bob)
        {
        
                limak = limak*3;
                bob = bob*2;
                year++;
        
        }
        
    }

    printf("%d", year);
    

}