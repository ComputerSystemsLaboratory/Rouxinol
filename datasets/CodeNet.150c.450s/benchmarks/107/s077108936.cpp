#include <bits/stdc++.h>
using ll = long long;
using namespace std;

constexpr int inf = 1e9;
constexpr ll linf = 1e18;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s, t; cin >> s >> t;
    int ns = s.length(), nt = t.length();

    vector<vector<int>> dp(ns + 1, vector<int>(nt + 1));
    for (int i = 0; i <= ns; i++) dp[i][0] = i;
    for (int j = 0; j <= nt; j++) dp[0][j] = j;
    for (int i = 0; i < ns; i++) {
        for (int j = 0; j < nt; j++) {
            dp[i + 1][j + 1] = min({dp[i][j + 1] + 1, dp[i + 1][j] + 1, dp[i][j] + (s[i] != t[j])});
        }
    }
    cout << dp[ns][nt] << endl;
    return 0;
}
