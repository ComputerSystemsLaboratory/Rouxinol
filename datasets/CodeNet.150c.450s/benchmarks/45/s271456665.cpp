#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll mypow(ll b, ll e, ll mod) {
    if( e == 0 ) return 1;
    if( e%2 == 0 )
	return mypow(b*b%mod, e/2,mod) % mod;
    else
	return b* mypow(b*b%mod, e/2,mod) % mod;
}
 
 
int main () {
 
    ll m,n;
    cin >> m >> n;
    ll mod = 1000000007;
    ll ans = mypow(m,n,mod);
    cout << ans % mod<< endl;
    return 0;
}