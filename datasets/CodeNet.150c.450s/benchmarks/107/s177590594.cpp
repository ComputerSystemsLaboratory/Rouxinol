#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;
typedef long long lint;

int dp[1111][1111];

void chmin(int& x, const int y) {
    x = min(x, y);
}

int main() {
    string X, Y;
    cin >> X >> Y;
    const int N = X.size(), M = Y.size();
    const int INF = 1e9+7;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            // i-1 番目は削除
            if (i > 0) chmin(dp[i][j], dp[i-1][j] + 1);
            // j-1 番目は挿入で対応
            if (j > 0) chmin(dp[i][j], dp[i][j-1] + 1);
            if (i > 0 && j > 0) {
                // 同じなのでスルー
                if (X[i-1] == Y[j-1]) chmin(dp[i][j], dp[i-1][j-1]);
                // 置換
                else chmin(dp[i][j], dp[i-1][j-1] + 1);
            }
        }
    }
    cout << dp[N][M] << endl;
    return 0;
}
