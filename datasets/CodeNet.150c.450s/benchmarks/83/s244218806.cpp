#include <iostream>
#include <vector>
using namespace std;

int dp[1001][10001];

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> v(N), w(N);
    for (int i = 0; i < N; i++)
        cin >> v[i] >> w[i];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= W; j++) {
            if (j - w[i] < 0) {
                dp[i + 1][j] = dp[i][j];
            } else {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
            }
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}

