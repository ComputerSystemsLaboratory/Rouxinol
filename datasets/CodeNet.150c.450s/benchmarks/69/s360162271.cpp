#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int a[10005];
int dp[10005];
int n;

///flag == 0求最长不上升子序列的长度
///flag == 1求最长不上升子序列的最少数目
///（即最长上升子序列的长度）
void slove(bool flag)
{
    int ans = 0;
    for(int i = 0; i < n; ++i)
    {
        dp[i] = 1;
        for(int j = 0; j < i; ++j)
        {
            if(!flag && a[j] < a[i])
                dp[i] = max(dp[i], dp[j] + 1);
            if(flag && a[j] >= a[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }
    if(ans <= 2)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        n = 10;
        for(int i = 0; i < 10; ++i)
            cin >> a[i];
        slove(1);
    }
    return 0;
}

