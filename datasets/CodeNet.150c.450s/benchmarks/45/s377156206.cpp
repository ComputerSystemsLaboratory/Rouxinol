#include <stdio.h>

#define NUM 1000000007

long long power_(long long m, long long n){
    //printf("%lld %lld\n", m, n);
    if(n == 1){
        return m % NUM;
    }
    return (n % 2 == 0) ? power_((m * m) % NUM, n / 2) : power_((m * m) % NUM, n / 2) * m % NUM;
}

int main(){
    long long M, N;
    scanf("%lld %lld", &M, &N);

    printf("%lld\n", power_(M, N));
}

