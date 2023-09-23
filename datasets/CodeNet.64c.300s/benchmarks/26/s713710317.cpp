#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<n; i++)
typedef long long ll;
typedef long long unsigned int llu;
ll MOD = 1000000007;
ll INF = 1000000009;

ll l[30];

void solve(){

    ll m,n;
    cin >> m >> n;
    l[0]=m;
    for(ll i=1; i<30; i++){
        l[i] = (l[i-1]*l[i-1]) % MOD;
    }

    ll tmp = n;
    ll ans = 1;
    rep(i,30){
        if(tmp%2==1){
            ans = (ans*l[i]) % MOD;
        }
        tmp /= 2;
    }

    cout << ans << endl;

}


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
  return 0;
}

