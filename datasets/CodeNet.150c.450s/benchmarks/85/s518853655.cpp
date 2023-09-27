#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e+18 + 10;
const int MAX_N = 100;
ll dp[MAX_N][MAX_N];

int main()
{
    int n;
    cin >> n;
    vector<int> r;

    for (int i = 0; i < n; i++)
    {
        int row, col;
        cin >> row >> col;
        if (i == 0)
        {
            r.push_back(row);
        }
        r.push_back(col);
    }

    // DPの初期化
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                dp[i][i] = 0;
            }
            else
            {
                dp[i][j] = INF;
            }
        }
    }

    // DPの更新
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i + j < n; i++)
        {
            for (int k = 0; k <= i + j; k++)
            {
                ll prod = r[i] * r[k + 1] * r[i + j + 1];
                dp[i][i + j] = min(dp[i][i + j], dp[i][k] + dp[k + 1][i + j] + prod);
            }
        }
    }

    cout << dp[0][n - 1] << endl;
    return 0;
}
