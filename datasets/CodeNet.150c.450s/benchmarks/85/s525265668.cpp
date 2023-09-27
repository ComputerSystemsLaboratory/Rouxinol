#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = 1001001001001001;

int n;
ll r[111], c[111];
ll dp[111][111]; // dp[le][ri] = [le, ri) の最小回数

ll rec(int le, int ri) {
    if (dp[le][ri] != INF) return dp[le][ri];
    if (ri - le - 2 == 0) {
        return dp[le][ri] = min(dp[le][ri], r[le] * c[le] * c[ri - 1]);
    }
    if (le + 1 < ri - 1) dp[le][ri] = min(dp[le][ri], rec(le + 1, ri) + r[le] * c[le] * c[ri - 1]);
    if (le < ri - 2) dp[le][ri] = min(dp[le][ri], rec(le, ri - 1) + r[le] * c[ri - 2] * c[ri - 1]);
    for (int md = le + 1; md < ri - 1; md++) {
        dp[le][ri] = min(dp[le][ri], rec(le, md) + rec(md, ri) + r[le] * c[md - 1] * c[ri - 1]);
    }
    return dp[le][ri];
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> r[i] >> c[i];
    for (int i = 0; i < 111; i++) {
        for (int j = 0; j < 111; j++) {
            dp[i][j] = INF;
        }
    }
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    rec(0, n);
    cout << dp[0][n] << endl;
}
