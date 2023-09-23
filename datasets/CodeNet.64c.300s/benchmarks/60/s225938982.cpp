#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

bool kouji[20][20]; // x, y
int dp[20][20];

int main() {
    int a, b, n, x, y;
    while (cin >> a >> b, (a || b)) {
        memset(kouji, 0, sizeof kouji);
        memset(dp, 0, sizeof dp);
        cin >> n;
        for (int i=0; i<n; ++i) {
            cin >> x >> y;
            kouji[x][y] = true;
        }
        dp[1][1] = 1;
        for (int i=1; i<=a; ++i) {
            for (int j=1; j<=b; ++j) {
                if (i == 1 && j == 1) continue;
                if (kouji[i][j]) continue;
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        cout << dp[a][b] << endl;
    }
    return 0;
}