#include <bits/stdc++.h>
#define rep(i,j) for (int (i)=0;(i)<(int)(j);++(i))
using namespace std;
typedef long long ll;

// void dfs(int i, int sum) {
//     if (i == n-1) {
//         if (sum == a) res++;
//     }
//     else {
//         if (sum-x[i] >= 0) { dfs(i+1, sum-x[i]); }
//         if (sum+x[i] <= 20) { dfs(i+1, sum+x[i]); }
//     }
// }

int main() {
    int n, a;
    cin >> n;
    vector<int> x(n-1);
    rep(i, n-1) cin >> x[i];
    cin >> a;

    long long dp[101][21];
    memset(dp, 0, sizeof(dp));

    dp[1][x[0]] = 1;
    for (int i=0;i<n-1;++i) {
        for (int j=0;j<=20;++j) {
            if (j - x[i] >= 0) {
                dp[i+1][j - x[i]] += dp[i][j];
            }
            if (j + x[i] <= 20) {
                dp[i+1][j + x[i]] += dp[i][j];
            }
        }
    }

    cout << dp[n-1][a] << endl;

    return 0;
}