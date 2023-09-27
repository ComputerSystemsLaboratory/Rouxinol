//????????????????????????(????????????????????§???)

#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;

int main() {
    int n,W;
    cin >> n >> W;

    int v[n],w[n],dp[110][10010];
    rep(i,0,n) {
        cin >> v[i] >> w[i];
    }

    rep(i,0,W) dp[0][i] = 0;

    rep(i,0,n) {
        rep(j,0,W+1) {
            if(j < w[i]) dp[i+1][j] = dp[i][j];
            else dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]] + v[i]);
        }
    }

    cout << dp[n][W] << endl;
}