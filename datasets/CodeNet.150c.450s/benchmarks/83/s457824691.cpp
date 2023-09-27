#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_W 10000

int main() {
    int N, W;
    cin >> N >> W;
    int w[MAX_N+1], v[MAX_N+1];
    for (int i = 0; i < N; i++) {
        cin >> v[i] >> w[i];
    }
    static int dp[MAX_N+1][MAX_W+1];
    fill((int*)dp, (int*)(dp+MAX_N*+1), 0);
    // dp[i+1][j] := i番目までの品物で、 重さjまでで最大価値
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= W; j++) {
            if (w[i] <= j)
                dp[i+1][j] = max(dp[i][j-w[i]] + v[i], dp[i][j]);
            else
                dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        }
    }
    cout << dp[N][W] << endl;
}

