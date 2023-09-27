#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ZERO(a) memset(a,0,sizeof(a))

int dp[1020][1020];

int lcs(string x, string y) {
    int n=x.size(), m=y.size();
    rep(i,n) rep(j,m) {
        if(x[i] == y[j])
            dp[i+1][j+1] = dp[i][j] + 1;
        else
            dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
    }
    return dp[n][m];
}

int main() {
    int q; cin >> q;
    rep(data,q) {
        ZERO(dp);
        string x, y;
        cin >> x >> y;
        int ans = lcs(x,y);
        cout << ans << endl;
    }
    return 0;
}