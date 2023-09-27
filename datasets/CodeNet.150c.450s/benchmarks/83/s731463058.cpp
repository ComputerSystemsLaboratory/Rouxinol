#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, W, v[110], w[110], dp[110][11000] = {};
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> v[i] >> w[i];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= W; ++j) {
            if (j < w[i]) dp[i + 1][j] = dp[i][j];
            else dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
        }
    }

    cout << dp[N][W] << endl;
    
    return 0;
}
