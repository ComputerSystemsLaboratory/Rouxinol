#include <iostream>

using namespace std;

int dp[101][10001];
int value[100];
int weight[100];
int NEGA_INF = -10000000;

int main() {
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; ++i) {
        cin >> value[i] >> weight[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= w; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j - weight[i - 1] >= 0) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - weight[i - 1]] + value[i - 1]);
            }
        }
    }
    cout << dp[n][w] << endl;
}