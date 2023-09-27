#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); i++)
#define roop(i, a, n) for(ll i = (a); i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll dp[n+1][n+1];
    ll a[n+1];
    roop(i, 1, n+1) cin >> a[i - 1] >> a[i];

    roop(i, 1, n+1) dp[i][i] = 0;
    roop(l, 2, n+1){
        roop(i, 1, n-l+2){
            ll j = i + l - 1;
            dp[i][j] = INT_MAX;
            roop(k, i, j) dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + a[i-1]*a[k]*a[j]);
        }
    }
    cout << dp[1][n] << endl;

    return 0;
}
