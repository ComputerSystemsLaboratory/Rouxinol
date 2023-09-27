#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;
const int INF = 1e9;

int main() {

    string s, t;
    cin >> s >> t;

    vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1));

    for (int i = 1; i <= s.size(); i++)
        dp[i][0] = i;
    for (int i = 1; i <= t.size(); i++)
        dp[0][i] = i;

    for (int i = 1; i <= s.size(); i++) {
        for (int j = 1; j <= t.size(); j++) {
            int m = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);

            if (s[i - 1] == t[j - 1]) {
                m = min(m, dp[i - 1][j - 1]);
                dp[i][j] = m;
            } else {
                m = min(m, dp[i - 1][j - 1] + 1);
                dp[i][j] = m;
            }
        }
    }

    cout << dp[s.size()][t.size()] << endl;

    return 0;
}
