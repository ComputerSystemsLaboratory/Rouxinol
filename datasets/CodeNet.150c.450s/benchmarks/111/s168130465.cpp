#include <bits/stdc++.h>

using namespace std;

#define rep(i,x) for(int i=0;i<x;++i)

long long dp[110][21];

signed main()
{
    int n; cin >> n;

    vector<int> a(n);

    rep(i, n) cin >> a[i];

    dp[1][a[0]] = 1;

    rep(i, n - 1) {
        if (i == 0) continue;
        rep(j, 21) {
            if (j + a[i] <= 20) dp[i + 1][j + a[i]] += dp[i][j];
            if (j - a[i] >= 0) dp[i + 1][j - a[i]] += dp[i][j];
        }
    }

    cout << dp[n - 1][a[n - 1]] << endl;
}