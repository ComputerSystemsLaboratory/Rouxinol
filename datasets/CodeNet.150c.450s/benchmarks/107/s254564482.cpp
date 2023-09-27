#include <iostream>
#include <string>
#include <algorithm> // std::min, std::max
#include <vector> // std::vector

template <class String>
size_t levenshtein(const String &s0, const String &s1) {
    size_t n0 = s0.size();
    size_t n1 = s1.size();
    const size_t INF = std::max(n0, n1);
    std::vector<std::vector<size_t>> dp(n0 + 1, std::vector<size_t>(n1 + 1, INF));
    dp[0][0] = 0;
    for (size_t i = 0; i <= n0; ++i) {
        for (size_t j = 0; j <= n1; ++j) {
            if (i == 0 && j == 0) {
                continue;
            }
            size_t tmp = INF;
            if (i > 0 && j > 0) {
                // change s0[i - 1] to s1[j - 1];
                tmp = std::min(tmp, 1 + dp[i - 1][j - 1]);
                if (s0[i - 1] == s1[j - 1]) {
                    // do nothing
                    tmp = std::min(tmp, dp[i - 1][j - 1]);
                }
            }
            if (i > 0) {
                // remove s0[i - 1]
                tmp = std::min(tmp, 1 + dp[i - 1][j]);
            }
            if (j > 0) {
                // append s1[j - 1] to s0
                tmp = std::min(tmp, 1 + dp[i][j - 1]);
            }
            dp[i][j] = tmp;
        }
    }
    return dp[n0][n1];
}

int main() {
    using namespace std;

    string s1, s2;
    cin >> s1 >> s2;
    cout << levenshtein(s1, s2) << endl;
    return 0;
}
