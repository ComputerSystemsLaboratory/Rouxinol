#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;

int dp[100][100];

int main(void)
{   
    int n;
    cin >> n;
    pair<int, int> rc[n];
    rep(i, n) cin >> rc[i].first >> rc[i].second;

    vector<vector<int> > dp(n, vector<int>(n, 1e9));
    
    rep(i, n) {
        dp[i][i] = 0;
    }

    for(int i = 1; i <= n-1; i++) {
        for(int j = 0; j <= n - 1 - i; j++) {
            for(int k = j; k < j + i; k++) {
                dp[j][j+i] = min(dp[j][j+i], dp[j][k] + dp[k+1][j+i] + rc[j].first*rc[k].second*rc[j+i].second);
            }
        }
    }

    cout << dp[0][n-1] << endl;
    return 0;
}
