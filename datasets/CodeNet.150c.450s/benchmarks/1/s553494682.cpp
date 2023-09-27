
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, a[100000];
ll dp[100002];
ll INF = 0xfffffffffffffff;

int main() {
    cin >> n;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = INF;
    }
    dp[n] = dp[n + 1] = INF;
    dp[0] = -1;
    for(ll i = 0; i < n; i++) {
        ll k = lower_bound(dp, dp + n + 2, a[i]) - dp;
        dp[k] = a[i];
    }
    ll ans = 0;
    while(dp[ans + 1] != INF) {
        ans++;
    }
    cout << ans << endl;
}
