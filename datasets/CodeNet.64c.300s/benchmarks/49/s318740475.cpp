#include <stdio.h>

int main(void){
    int a,b,sum,cnt;

    while (scanf("%d %d", &a, &b) == 2){
        cnt=0;
        sum = a+b;
        while(sum){
            cnt++;
            sum /= 10;
        }
        printf("%d\n", cnt);
    }
    return 0;
}