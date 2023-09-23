#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll=long long;

ll power(ll n,ll m)
{
    ll ans=1;
    for (int r=0;m>>r>0;r++)
    {
        if ((m>>r)&1) ans=ans*n%mod;
        n=n*n%mod;
    }
    return ans;
}

int main()
{
    ll n,m;cin >> n >> m;
    cout << power(n,m) << endl;
    return 0;
}
