#include<cstdio>
#define ll long long int
using namespace std;
const int mod = 1000000007;

ll qpow(ll x, ll y)
{
    ll res=1;
    while(y)
    {
        if(y&1) res=res*x%mod;
        y>>=1;
        x=x*x%mod;
    }
    return res;
}

int main()
{
    ll m, n;
    scanf("%lld%lld", &m, &n);
    printf("%lld\n", qpow(m, n));
    return 0;
}