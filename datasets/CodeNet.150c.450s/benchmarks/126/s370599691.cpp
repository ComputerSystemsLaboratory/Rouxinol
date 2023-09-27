#include <bits/stdc++.h>

using namespace std;

int main()
{
    int W, H, N;
    while (cin >> W >> H, W) {
        cin >> N;
        int x, y;
        vector<vector<int>> a(H, vector<int>(W, 1));
        for (int i = 0; i < N; i++) {
            cin >> x >> y;
            x--; y--;
            a[y][x] = 0;
        }

        int dp[25][25] = {{}};
        dp[0][0] = 1;
        for (int i = 1; i < H; i++) {
            if (a[i][0] == 1) {
                dp[i][0] += dp[i-1][0];
            } else {
                break;
            }
        }

        for (int i = 1; i < W; i++) {
            if (a[0][i] == 1) {
                dp[0][i] += dp[0][i-1];
            } else {
                break;
            }
        }
            
        for (int i = 1; i < H; i++) {
            for (int j = 1; j < W; j++) {
                if (a[i][j] == 0) continue;
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        cout << dp[H-1][W-1] << endl;
    }
    return 0;
}