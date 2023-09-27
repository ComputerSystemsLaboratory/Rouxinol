#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1 << 29;

int main() {
    int N, W, v[100], w[100];
    cin >> N >> W;
    for (int j = 0; j < N; ++j) {
        cin >> v[j] >> w[j];
    }

    int dp[10001];
    fill(dp, dp+W+1, -INF);
    dp[0] = 0;

    for (int j = 0; j < N; ++j) {
        for (int k = W; k >= w[j]; --k) {
            if (dp[k - w[j]] != INF) {
                dp[k] = max(dp[k], dp[k - w[j]] + v[j]);
            }
        }
    }

    int ans = -INF;
    for (int j = 0; j <= W; ++j) {
        ans = max(ans, dp[j]);
    }
    cout << ans << endl;
    return 0;
}