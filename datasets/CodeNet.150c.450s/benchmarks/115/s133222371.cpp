#include <bits/stdc++.h>
using namespace std;

string s, t;
int dp[1000][1000];

void solve() {
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < t.size(); j++) {
            dp[i][j] = (i < 1 || j < 1 ? 0 : dp[i-1][j-1]) + (s[i] == t[j] ? 1 : 0);
            int a = (i < 1 ? 0 : dp[i-1][j]);
            int b = (j < 1 ? 0 : dp[i][j-1]);
            dp[i][j] = max(dp[i][j], max(a, b));
        }
    }

    cout << dp[s.size()-1][t.size()-1] << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) solve();

    return 0;
}