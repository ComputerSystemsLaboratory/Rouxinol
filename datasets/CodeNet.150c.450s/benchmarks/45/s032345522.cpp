#include <iostream>
#include <cstdio>

using namespace std;

#define MOD 1000000007
typedef long long ll;

ll power(ll a, ll b)
{
    if (b == 0) return 1;
    ll t = power(a, b/2) % MOD;
    t = t*t % MOD;
    if (b % 2 == 0) return t;
    return t*a % MOD;
}

int main()
{
    ll n, m;
    cin>>m>>n;
    cout<<power(m, n)<<"\n";
    return 0;
}