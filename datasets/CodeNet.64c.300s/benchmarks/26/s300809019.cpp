#include <cstdio>
#include <vector>
#include <algorithm>

static const long long MOD=1e9+7;

long long modpow(long long b, long long e, long long p=MOD) {
    /* Exponentiation by squaring */
    // returns n == b**e (mod p)
    long long n=1, a=b%p;
    while (e) {
        if (e & 1)
            (n *= a) %= p;

        (a *= a) %= p;
        e >>= 1;
    }
    return n;
}

int main() {
    long long m, n;
    scanf("%lld %lld", &m, &n);

    printf("%lld\n", modpow(m, n));
    return 0;
}