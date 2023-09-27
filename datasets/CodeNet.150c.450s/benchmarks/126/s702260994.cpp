//https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Prelim/0515?year=2007

#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w, n;

    while (true) {
        cin >> h >> w >> n;
        if (h + w == 0) return 0;

        int sheet[20][20] = {};
        while (n--) {
            int x, y;
            cin >> x >> y;
            sheet[x][y] = 1;//通れないところ
        }

        int dp[20][20] = {};
        dp[1][0] = 1;
        for (int i = 1; i <= h; ++i) {
            for (int j = 1; j <= w; ++j) {
                if (sheet[i][j] == 1) continue;
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        cout << dp[h][w] << endl;
    }
}

/*
 * dfsしようと思ったが，経路数を求めるだけなので断念。
 *
 */
