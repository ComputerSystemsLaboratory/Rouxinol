#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long lint;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define trep(i, k, n) for (int i = (k); i < (int)(n); ++i)
const int INF =1e7;
typedef pair<int, int> P;
int c[50];
int dp[50001];
int n, m;
int coin(int n)
{
    rep(i,n+1){
        dp[i] = INF;
    }
    dp[0] = 0;
    rep(i, n + 1)
    {
        rep(j, m)
        {
            if ((i - c[j])>=0)
            {
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
            }
        }
    }
    return dp[n];
}
int main()
{
    cin >> n >> m;
    rep(i, m)
    {
        cin >> c[i];
    }
    int ans = coin(n);
    cout << ans << endl;
    return 0;
}
