#include <cstdio>
typedef long long ll;
typedef unsigned long long ull;

ll mod_pow(ull x, ull n, ull mod) {
    ull res = 1;
    while (n > 0) {
        if (n & 1) res = res * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
    return res;
}

int main(void) {
    ull m, n;
    scanf("%lld %lld", &m, &n);
    printf("%lld\n", mod_pow(m, n, 1000000007));
    return 0;
}