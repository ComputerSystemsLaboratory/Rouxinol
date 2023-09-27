#include <iostream>
#include <cstring>

using namespace std;

const int INF = -1;

int N, W;
int v[101], w[101];
int dp[101][10001];

// i???????????§???????????§???j??\????????????
int solve(int i, int j) {
    if (dp[i][j] != INF) return dp[i][j];
    int res;
    if (i == N) res = 0;
    else if (j < w[i]) res = solve(i+1, j);
    else res = max(solve(i+1, j), solve(i+1, j - w[i]) + v[i]);
    return dp[i][j] = res;
}

int main() {
    memset(dp, -1, sizeof(dp));
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> v[i] >> w[i];
    cout << solve(0, W) << endl;
    return 0;
}