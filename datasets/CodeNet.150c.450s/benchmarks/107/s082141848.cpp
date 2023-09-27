#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <tuple>
#include <vector>

using namespace std;

#define rep(i, n) for (int64_t i = 0; i < (n); i++)
#define irep(i, n) for (int64_t i = 0; i <= (n); i++)
#define rrep(i, n) for (int64_t i = (n)-1; i >= 0; i--)
#define rirep(i, n) for (int64_t i = n; i >= 0; i--)

int dp[1'001][1'001];

void solve(const string& x, const string& y)
{
    irep(i, x.size()) irep(j, y.size())
    {
        if (i == 0) {
            dp[i][j] = j;
        } else if (j == 0) {
            dp[i][j] = i;
        } else {
            dp[i][j] = min(
                min(dp[i - 1][j], dp[i][j - 1]) + 1,
                dp[i - 1][j - 1] + (x[i - 1] == y[j - 1] ? 0 : 1));
        }
    }
    cout << dp[x.size()][y.size()] << endl;
}

int main()
{
    string x, y;
    cin >> x >> y;
    solve(x, y);
    return 0;
}
