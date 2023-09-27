#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = (int)1e9 + 7;

int levenshtein_distance(string s, string t) {
    int m = s.length(), n = t.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, INF));
    for (int i = 0; i <= m; i++) dp[i][0] = i;
    for (int j = 0; j <= n; j++) dp[0][j] = j;
    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) {
        dp[i + 1][j + 1] = min({dp[i][j] + (s[i] != t[j]),  // substitution
                                dp[i][j + 1] + 1,           // insertion
                                dp[i + 1][j] + 1});         // deletion
    }
    return dp[m][n];
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << levenshtein_distance(s, t) << endl;
    return 0;
}
