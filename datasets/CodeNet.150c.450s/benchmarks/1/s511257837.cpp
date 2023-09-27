#include<bits/stdc++.h>
using namespace :: std;
long long a[1000100];
long long dp[1000100];
long long max(long long x, long long y)
{
    return (x > y ? x : y);
}
int main()
{
    //ios_base :: sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    for (int i = 0; i < 1e6 + 2; i++)
    {
        dp[i] = 1e16 + 3;
    }
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        long long x = lower_bound(dp, dp + n, a[i]) - dp;
        dp[x] = a[i];
        ans = max(ans, x);
    }
    cout << ++ans << endl;
    return 0;
}