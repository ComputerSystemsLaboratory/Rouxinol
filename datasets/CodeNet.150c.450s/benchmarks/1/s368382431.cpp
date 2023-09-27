#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e+18 + 10;

ll dp[100000];

int binary_search(int ng, int ok, ll target)
{
    while (ng + 1 < ok)
    {
        int mid = (ng + ok) / 2;
        if (dp[mid] >= target)
        {
            ok = mid;
        }
        else
        {
            ng = mid;
        }
    }
    return ok;
}

int main()
{
    int n;
    cin >> n;

    // DPテーブルの初期化
    for (int i = 0; i < n; i++)
    {
        dp[i] = INF;
    }

    // DP開始
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (i == 0)
        {
            dp[0] = a;
            continue;
        }

        if (a > dp[i - 1])
        {
            dp[i] = a;
        }
        else
        {
            dp[binary_search(-1, i, a)] = a;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] != INF)
        {
            ans = i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
