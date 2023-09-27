#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int dp[s1.size() + 1][s2.size() + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i <= s1.size(); ++i) dp[i][0] = i;
    for (int j = 0; j <= s2.size(); ++j) dp[0][j] = j;
    for (int i = 0; i < s1.size(); ++i) {
        for (int j = 0; j < s2.size(); ++j) {
            int a = (s1[i] == s2[j]) ? 0 : 1;
            dp[i + 1][j + 1] = min(dp[i][j] + a, min(dp[i + 1][j] + 1, dp[i][j + 1] + 1));
        }
    }
    cout << dp[s1.size()][s2.size()] << endl;

    return 0;
}
