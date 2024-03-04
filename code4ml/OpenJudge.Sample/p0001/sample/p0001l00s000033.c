#include<stdio.h>

int main(){
    int a, b, total, i, digits=0;

    while(scanf(" %d %d", &a, &b) != EOF){
        total = a + b;

        for(i=1; i<=total; i*=10){
            digits++;
        }
        printf("%d\n", digits);

        digits = 0;
    }

    return 0;
}