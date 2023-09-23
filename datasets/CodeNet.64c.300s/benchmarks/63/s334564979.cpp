#include <cstdio>
#include <algorithm>
#include <utility>

using namespace std;

long long get_gcd(long long m, long long n) {
    /* Euclidean Algorithm */
    while (n)
        swap(m%=n, n);

    return m;
}

int main() {
    while (true) {
        long long a, b;
        if (scanf("%lld %lld", &a, &b) == EOF)
            break;

        long long gcd=get_gcd(a, b);
        printf("%lld %lld\n", gcd, a*b/gcd);
    }

    return 0;
}