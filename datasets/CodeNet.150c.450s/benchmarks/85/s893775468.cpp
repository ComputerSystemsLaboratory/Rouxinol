#include <bits/stdc++.h>
using namespace std;

void dp_solve(vector<vector<long long>> &dp, int l, int r, vector<pair<int, int>> &vp)
{
    if (dp[l][r] != -1)
    {
        return;
    }
    if (l == r)
    {
        dp[l][r] = 0;
        return;
    }
    for (int i = 0; i < r - l; i++)
    {
        dp_solve(dp, l, l + i, vp);
        dp_solve(dp, l + i + 1, r, vp);
    }
    dp[l][r] = 10000000000;
    for (int i = 0; i < r - l; i++)
    {
        dp[l][r] = min(dp[l][r], dp[l][l + i] + dp[l + i + 1][r] + vp[l].first * vp[l + i].second * vp[r].second);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, -1));
    vector<pair<int, int>> vp(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int r, c;
        cin >> r >> c;
        vp[i] = make_pair(r, c);
    }
    dp_solve(dp, 1, n, vp);
    cout << dp[1][n] << endl;
}

