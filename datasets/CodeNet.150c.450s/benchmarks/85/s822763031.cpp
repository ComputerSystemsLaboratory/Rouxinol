#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using vvi = std::vector<std::vector<int>>;

void solve()
{
    using namespace std;

    constexpr int inf = (1 << 23);

    int n;
    cin >> n;

    vector<int> d(n + 1);

    for (int i = 0; i < n; ++i)
    {
        cin >> d[i];
        if(i + 1 != n)
            cin.ignore(numeric_limits<streamsize>::max(), ' ');
    }

    cin.ignore(numeric_limits<streamsize>::max(), ' ');
    cin >> d[n];

    vvi dp (n, vector<int>(n, 0));

    //自分自身との積は乗算が発生しない
    for (int i = 0; i < n; ++i)
        dp[i][i] = 0;

    for (int l = 1; l < n; ++l)
    {
        for (int i = 0; i < n - l; ++i)
        {
            int j = i + l;
            dp[i][j] = inf;
            for (int k = i; k < j; ++k)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + d[i] * d[k + 1] * d[j + 1]);
            }
        }
    }

    cout << dp[0][n - 1] << endl;
}

int main()
{
    solve();
        return 0;
}
        
