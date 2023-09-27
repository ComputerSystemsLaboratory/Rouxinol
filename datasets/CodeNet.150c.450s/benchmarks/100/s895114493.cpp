#include<stdio.h>

int main(void){

    int n,i;
    long long ans = 1;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        ans *= i;
    }
    printf("%lld\n", ans);
    return 0;
}