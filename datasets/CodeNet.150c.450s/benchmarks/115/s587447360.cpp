#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
using ll = long long;
using namespace std;

const ll MOD = 1e9 + 7;

int main(void)
{
    int N;
    cin >> N;

    while (N--)
    {
        string s, t;
        cin >> s >> t;

        int dp[1010][1010];
        for (int i = 0; i < 1010; ++i)
            for (int j = 0; j < 1010; ++j)
                dp[i][j] = 0;

        int n = s.size(), m = t.size();

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

                    dp[i + 1][j + 1] = max({dp[i + 1][j + 1], dp[i][j], dp[i + 1][j], dp[i][j + 1]});
                }
            }
        }

        cout << dp[n][m] << endl;
    }

    return 0;
}
