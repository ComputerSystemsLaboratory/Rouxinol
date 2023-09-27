#include <stdio.h>
#define ll long long int
using namespace std;

const ll md=1000000007;

ll power(ll b, ll p, ll m)
{
    ll d;
    if(p==0)
        return 1;
    d=power(b, p/2, m);
    if(p%2==0)
        return (d%m*d%m)%m;
    else
        return (b%m*(d%m*d%m)%m)%m;
}

int main()
{
    ll a, b, d;
    scanf("%lld %lld", &a, &b);
    d=power(a, b, md);
    printf("%lld\n", d);
    return 0;
}