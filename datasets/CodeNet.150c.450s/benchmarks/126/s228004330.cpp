#include <iostream>

using namespace std;

int dp[18][18];

int main() {
    while (true) {
        for (int i = 0; i < 17; i++) {
            for (int j = 0; j < 17; j++) {
                dp[i][j] = 0;
            }
        }
        for (int i = 0; i < 18; i++) {
            for (int j = 0; j < 18; j++) {
                if (dp[i][j] != 0) {
                    cout << "hoge" << endl;
                }
            }
        }
        int a, b, n;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            dp[x - 1][y - 1] = -1;
        }
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (dp[i][j] == -1) {
                    dp[i][j] = 0;
                } else if (i == 0 && j == 0) {
                    dp[i][j] = 1;
                } else if (i == 0) {
                    dp[i][j] = dp[i][j - 1];
                } else if (j == 0) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }
        cout << dp[a - 1][b - 1] << endl;
    }
}