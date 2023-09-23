#include <cstdio>
#include <cmath>
using namespace std;
typedef unsigned long long ull;
static const int M = 1000000007;

ull power(int x, int n) {
    ull res = 1;
    if ( n > 0) {
        res = power(x, n/2);
        if (!(n & 1)) res = (res * res) % M;
        else res = (((res*res) % M) * x) % M;
    }
    return res;
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%llu\n", power(m, n));
    return 0;
}

