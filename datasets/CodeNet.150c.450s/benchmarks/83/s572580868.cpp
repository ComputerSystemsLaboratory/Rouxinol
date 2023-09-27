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

int v[110], w[110];
int dp[110][10010];
int main(void)
{
    int N, W;
    cin >> N >> W;

    for (int i = 0; i < N; ++i)
        cin >> v[i] >> w[i];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= W; ++j)
        {
            if (j - w[i] >= 0)
                dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
            else
                dp[i + 1][j] = dp[i][j];
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}
