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

int const MOD = 1e9 + 7;
int main(void)
{
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        string s, t;
        cin >> s >> t;

        int dp[1010][1010];
        for (int i = 0; i < 1010; ++i)
            for (int j = 0; j < 1010; ++j)
                dp[i][j] = 0;

        int n = s.size();
        int m = t.size();

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (s[i] == t[j])
                {
                    dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
                }
                else
                {
                    dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
                    dp[i][j + 1] = max(dp[i][j + 1], dp[i][j]);
                    dp[i + 1][j + 1] = max({dp[i + 1][j + 1], dp[i + 1][j], dp[i][j + 1]});
                }
            }
        }

        cout << dp[n][m] << endl;
    }
    return 0;
}
