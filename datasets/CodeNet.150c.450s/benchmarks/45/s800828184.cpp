#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll pow_mod(ll a, ll n, ll p)
{
    if(n == 1){
        return a%p;
    }else if(n%2 == 1){
        return a*pow_mod(a,n-1,p)%p;
    }else{
        ll t = pow_mod(a,n/2,p);
        return t*t%p;
    }
}

int main()
{
    ll i,j;
    ll m,n;
    cin >> m >> n;
    ll MOD = 1e9+7;
    ll ans = pow_mod(m,n,MOD);
    cout << ans << endl;
    return 0;
}
