#include<stdio.h>

int main()
{
    long long m, n;
    scanf("%lld %lld", &m, &n);

    long long x = m, y = n, z = 1;

    for( ; y; y >>= 1){
        if(y & 1){ z = (z * x) % 1000000007; }
        x = (x * x) % 1000000007;
    }
    printf("%lld\n", z);
 
    return 0;
}