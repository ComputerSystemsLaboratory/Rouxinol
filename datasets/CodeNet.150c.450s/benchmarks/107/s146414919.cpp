// 5/4
// 2-3-2. 最長共通部分裂問題(LCS)の類題

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int dp[1010][1010];

int main() {
    // int n, m;
    // cin >> n >> m;

    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    dp[0][0] = 0;

    rep(i, n + 1) {
        dp[i][0] = i;
    }
    rep(j, m + 1) {
        dp[0][j] = j;
    }

    rep(i, n) {
        rep(j, m) {
            // if (s[i] == t[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
            // else dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);

            if (s[i] == t[j]) dp[i + 1][j + 1] = dp[i][j];
            else dp[i + 1][j + 1] = min(min(dp[i + 1][j] + 1, dp[i][j + 1] + 1), dp[i][j] + 1);

            // cout << "dp[i+1][j+1] = " << dp[i + 1][j + 1] << endl;
            // printf("dp[%d][%d] = %d\n", i + 1, j + 1, dp[i + 1][j + 1]);
        }
    }

    cout << dp[n][m] << endl;
    // cout << max(n - dp[n][m], m - dp[n][m]) << endl;
}
