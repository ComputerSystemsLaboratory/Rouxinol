// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int dp[20][65536];

int main(int argc, char **argv)
{
        int n, m;
        cin >> n >> m;
        vector<int> c(m);
        for (int i = 0; i < m; i++)
                cin >> c[i];
        sort(c.begin(), c.end());
        for (int i = 0; i < m; i++) {
                for (int j = 0; j <= n; j++) {
                        if (!i) {
                                dp[i][j] = j;
                        }
                        else if (j < c[i]) {
                                dp[i][j] = dp[i-1][j];
                        }
                        else {
                                dp[i][j] = min(dp[i-1][j], dp[i][j-c[i]] + 1);
                        }
                }
        }
        cout << dp[m-1][n] << endl;
        return 0;
}