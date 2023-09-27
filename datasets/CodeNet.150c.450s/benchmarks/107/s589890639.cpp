#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int levenshtein_distance(const string& s1, const string& s2) {
    auto m = s1.size();
    auto n = s2.size();

    int dp[m+1][n+1];
    // fill(&dp[0][0], &dp[m][n] + 1, 0);
    for (auto i = 0; i <= m; ++i)
        dp[i][0] = i;
    for (auto j = 0; j <= n; ++j)
        dp[0][j] = j;

    for (auto i = 1; i <= m; ++i) {
        for (auto j = 1; j <= n; ++j) {
            auto cost = s1[i-1] == s2[j-1] ? 0 : 1;
            dp[i][j] = min(dp[i-1][j] + 1, min(dp[i][j-1] + 1, dp[i-1][j-1] + cost));
        }
    }
    return dp[m][n];
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    cout << levenshtein_distance(s1, s2) << endl;

    return 0;
}