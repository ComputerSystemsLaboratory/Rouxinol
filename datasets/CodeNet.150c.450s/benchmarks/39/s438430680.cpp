#include <stdio.h>
#include <string.h>

int main(void){

    int a = 0;
    int b = 0;

    scanf("%d %d",&a,&b);


    int menseki = a*b;
    int syu = (a*2) + (b*2);
    printf("%d %d\n",menseki,syu);
    
    return 0;
}