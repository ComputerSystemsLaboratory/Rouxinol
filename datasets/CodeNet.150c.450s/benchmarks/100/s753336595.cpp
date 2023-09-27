#include <cstdio>
#include <iostream>

int main(void)
{
    int n;
    unsigned long long ans = 1;

    scanf("%d", &n);
    
    for (int i = n; 0 < i; i--){
        ans *= i;
    }
    printf("%llu\n", ans);
    
}