#include <stdio.h>

int main(void){
    int a,b,c;
    int count = 0;
    scanf("%d %d %d",&a,&b,&c);
    while(a <= b){
        if(c % a == 0) count++;
        a++;
    }
    printf("%d\n",count);
    return 0;
}