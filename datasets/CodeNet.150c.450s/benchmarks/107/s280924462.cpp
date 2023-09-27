#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const int INF = 1e9;

int main()
{
    string s, t; cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INF));
    for(int i = 0; i <= n; i++)dp[i][0] = i;
    for(int j = 0; j <= m; j++)dp[0][j] = j;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            dp[i][j] = min({dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + (s[i - 1] == t[j - 1] ? 0 : 1)});
        }
    }
    cout << dp[n][m] << endl;
}
