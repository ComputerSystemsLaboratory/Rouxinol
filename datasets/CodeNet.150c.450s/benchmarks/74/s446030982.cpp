/**
 * Combinatorial - Coin Changing Problem
 */

#include <iostream>

using namespace std;

const int INF = 1 << 29;

int main() {

    int n, m;
    cin >> n >> m;

    int dp[n + 1];
    fill(dp, dp + n + 1, INF);
    dp[0] = 0;

    for (int i = 0; i < m; i++) {
        int c;
        cin >> c;
        for (int j = c; j <= n; j++) {
            dp[j] = min(dp[j], dp[j - c] + 1);
        }
    }

    cout << dp[n] << endl;
}