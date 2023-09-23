#include<stdio.h>

int a,b,c,n;

int main(){
    scanf("%d %d %d", &a, &b, &c);
    for(n = 0; a <= b; a++){
        if(c < a) break;
        if(c % a == 0) n++;
    }
    printf("%d\n", n);
    return 0;
}