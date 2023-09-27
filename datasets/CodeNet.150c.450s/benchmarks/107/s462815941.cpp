/**
 * Combinatorial - Edit Distance (Levenshtein Distance)
 */

#include <iostream>

using namespace std;

int main() {

    string s1, s2;
    int len1, len2;

    cin >> s1 >> s2;
    len1 = (int) s1.length();
    len2 = (int) s2.length();

    int dp[len1 + 1][len2 + 1];

    dp[0][0] = 0;
    for (int i = 1; i <= len1; i++) dp[i][0] = i;
    for (int i = 1; i <= len2; i++) dp[0][i] = i;

    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
            dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1));
        }
    }

    cout << dp[len1][len2] << endl;
}