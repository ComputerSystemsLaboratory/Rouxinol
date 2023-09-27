#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;
long long dp[17][17];
int main()
{
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        memset(dp, 0, sizeof(dp));
        dp[1][1] = 1;
        int n;
        cin >> n;
        while (n--) {
            int x, y;
            cin >> x >> y;
            dp[x][y]=-1;
        }
        for (int i=1; i<=a; ++i) {
            for (int j=1; j<=b; ++j) {
                if (dp[i][j] < 0)
                    dp[i][j] = 0;
                else
                    dp[i][j] = max(dp[i][j], dp[i-1][j] + dp[i][j-1]);
            }
        }
        cout << dp[a][b] << endl;
    }
    return 0;
}