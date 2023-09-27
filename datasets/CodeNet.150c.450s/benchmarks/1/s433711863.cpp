#include <bits/stdc++.h>
 
#define rep(i,n) for(ll i=0;i<n;++i)
#define ALL(a) (a).begin(),(a).end()
 
using namespace std;
using ll  = long long;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
 
const ll MOD  = 1e9 + 7;
const ll LINF = 1LL << 60;
const int INF = 1e9 + 7;

int main(){
    ll n;
    cin >> n;
    
    ll a[n];
    rep(i, n)cin >> a[i];

    vector<ll> dp(n);
    rep(i, n)dp[i] = INF;

    rep(i, n){
        ll pos = lower_bound(ALL(dp), a[i]) - dp.begin();

        dp[pos] = a[i];
    }

    ll ans = lower_bound(ALL(dp), INF) - dp.begin();

    cout << ans << endl;
}
