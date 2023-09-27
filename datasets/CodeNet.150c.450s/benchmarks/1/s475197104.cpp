#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<n; i++)
typedef long long ll;
typedef long long unsigned int llu;
ll MOD = 1000000007;
ll INF = 1000000009;

ll a[100010];
ll dp[100010];

void solve(){

    ll n;
    cin >> n;
    rep(i,n){
        cin >> a[i];
    }
    rep(i,100010){
        dp[i]=INF;
    }
    rep(i,n){
        auto itr = lower_bound(dp,dp+n,a[i]);
        *itr=min(*itr, a[i]);
        /*
        rep(j,n){
            cout << dp[j] << " ";
        }
        cout << endl;
        */
    }
    
    auto itr = lower_bound(dp,dp+n,INF);
    cout << itr-dp << endl;

}


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
  return 0;
}

