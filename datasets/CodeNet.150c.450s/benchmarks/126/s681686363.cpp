#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M, N || M) {
        int Q; cin >> Q;
        vector<vector<int> > f(M, vector<int>(N, true)), dp(M, vector<int>(N));
        dp[0][0] = 1;
        for (int i = 0; i < Q; i++) {
            int x, y; cin >> x >> y;
            f[y-1][x-1] = false;
        }

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (i + 1 < M && f[i+1][j]) dp[i+1][j] += dp[i][j];
                if (j + 1 < N && f[i][j+1]) dp[i][j+1] += dp[i][j];
            }
        }

        cout << dp[M-1][N-1] << endl;
    }

    return 0;
}