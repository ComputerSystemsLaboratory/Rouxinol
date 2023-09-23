#include <cstdio>
using namespace std;

static const long long int M = 1000000007;

long long int mypow(long long int x, long long int n)
{
    long long int t, t2;
    if (n == 1){
        return x % M;
    }
    t = mypow(x, n / 2);
    t2 = (t * t) % M;
    if (n % 2 == 0){
        return t2;
    }else{
        return (t2 * x) % M;
    }
}

int main()
{
    long long int m, n;
    scanf("%lld %lld", &m, &n);
    
    printf("%lld\n", mypow(m, n));
    return 0;
}

