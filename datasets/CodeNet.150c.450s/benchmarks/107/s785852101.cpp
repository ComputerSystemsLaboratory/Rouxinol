#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int dp[1001][1001];
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    memset(dp, 0, sizeof(dp));
    rep(i, m + 1) dp[0][i] = i;
    rep(i, n + 1) dp[i][0] = i;
    REP(i, 1, n + 1) REP(j, 1, m + 1){
        dp[i][j] = dp[i - 1][j - 1];
        if(a[i - 1] != b[j- 1]) dp[i][j] += 1;
        int temp = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
        dp[i][j] = min(temp, dp[i][j]);
    }
    cout << dp[n][m] << endl;
    return 0;
}