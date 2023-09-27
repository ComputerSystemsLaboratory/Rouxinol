#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int dp[101][101];
    int N[101];
    for (int i = 1; i <= n; ++i) {
        cin >> N[i- 1] >> N[i];
    }

    for (int i = 1; i <= n; ++i) {
        dp[i][i] = 0;
    }

    for (int len = 2; len <= n ; ++len) {
        for (int i = 1; i <= n - len + 1; ++i) {
            int j = i + len - 1;
            dp[i][j] = (1 << 21);
            for (int k = i; k <= j - 1; ++k) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + N[i - 1] * N[k] * N[j]);
            }
        }
    }

    cout << dp[1][n] << endl;
    return 0;
}
