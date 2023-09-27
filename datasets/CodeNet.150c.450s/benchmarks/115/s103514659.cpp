#include <bits/stdc++.h>

using namespace std;

#define rep(i,x) for(int i=0;i<x;++i)
#define rrep(i,x) for(int i=x-1;i>=0;--i)

int dp[1010][1010];

int main()
{
    int q; cin >> q;

    rep(_, q) {
        memset(dp, -1, sizeof(dp));
        dp[0][0] = 0;

        string a,b; cin >> a>>b;

        int n = a.size(), m = b.size();
        rep(i, n+1) {
            rep(j, m+1) {
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
                dp[i][j + 1] = max(dp[i][j + 1], dp[i][j]);

                if (a[i] == b[j]) {
                    dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
                }
            }
        }

        cout << dp[n][m] << endl;
    }
}