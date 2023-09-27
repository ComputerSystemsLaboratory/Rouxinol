#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <queue>
using ll = long long;
using namespace std;

int dp[1010][1010];
int const MOD = 1e9 + 7;
int main(void)
{
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    for (int i = 0; i < 1010; ++i)
        for (int j = 0; j < 1010; ++j)
            dp[i][j] = MOD;
    for (int i = 0; i <= n; ++i)
    {
        dp[0][i] = i;
    }
    for (int i = 0; i <= m; ++i)
    {
        dp[i][0] = i;
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int tmp = 0;
            if (s[j] != t[i])
                tmp++;

            dp[i + 1][j + 1] = min({dp[i][j + 1] + 1, dp[i + 1][j] + 1, dp[i][j] + tmp});
        }
    }
    cout << dp[m][n] << endl;
    return 0;
}
