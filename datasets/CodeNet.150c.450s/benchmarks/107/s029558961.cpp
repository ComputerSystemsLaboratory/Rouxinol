#include <bits/stdc++.h>
using namespace std;

struct LevenshteinDistance {
    vector<vector<int>> dp;
    int diff(string& S, string& T) {
        dp.resize(S.size() + 1);
        for (auto&& v : dp) v.assign(T.size() + 1, INT32_MAX / 2);
        for (int i = 0; i <= (int)S.size(); ++i) dp[i][0] = i;
        for (int j = 0; j <= (int)T.size(); ++j) dp[0][j] = j;
        for (int i = 0; i < (int)S.size(); ++i) {
            for (int j = 0; j < (int)T.size(); ++j) {
                dp[i + 1][j + 1] = dp[i][j] + (S[i] != T[j]);
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i + 1][j] + 1);
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j + 1] + 1);
            }
        }
        return dp[S.size()][T.size()];
    }
};

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    LevenshteinDistance ld;
    cout << ld.diff(s1, s2) << endl;
}
