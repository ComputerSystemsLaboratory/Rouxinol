#include <iostream>
#include <cstring>

using namespace std;

const int INF = -1;

int N, W;
int v[101], w[101];
int dp[101][10001];

// i???????????§???????????§???j??\????????????
int main() {
    memset(dp, 0, sizeof(dp));
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> v[i] >> w[i];
    for (int i = N-1; i >= 0; --i) {
        for (int j = 0; j <= W; ++j) {
            if (j < w[i]) dp[i][j] = dp[i+1][j];
            else dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]]+v[i]);
        }
    }
    cout << dp[0][W] << endl;
    return 0;
}