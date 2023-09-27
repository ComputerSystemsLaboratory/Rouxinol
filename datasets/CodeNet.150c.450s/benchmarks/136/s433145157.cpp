#include <stdio.h>

long GetGCD(long x, long y);

int main(void){
    long  n,m,gcd,lcm;
    
    while (scanf("%ld %ld", &n, &m)!=EOF){
        gcd = GetGCD(n,m);
        lcm = n * m / gcd;
        printf("%ld %ld\n", gcd, lcm);
    }
    return 0;
}

long GetGCD(long x, long y){
    return y%x ? GetGCD(y%x, x) : x;
}