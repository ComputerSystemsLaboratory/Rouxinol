#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    // cout << fixed << setprecision(10) << flush;

    int n;
    cin >> n;
    vector<int> r(n), c(n);
    for(int i=0; i<n; i++){
        cin >> r[i] >> c[i];
    }

    // 最後の行列をどうやって掛けるか
    // (i-1)個 * 1個, (i-2) * (1 * 1), (i-3) * (2 * 1), ..., 1 * ((i-2) * 1)
    // のうちから最小を求め、ストックする
    // 0 <= i <= n
    // つまり、左から i 番目から j 番目までかけたときの最小の乗算の数、をストックしておく必要がある
    // dp[i][i] = 0
    // dp[i][j] = min_{i<=i_j<j} ((i ~ i_j までまとめたときの最小値) + r[i]*c[i_j]*c[j] + (i_j+1 ~ j-1 までまとめたときの最小値 + r[i_j+1]*c[j-1]*r[j]))
    // dp[i][j] = min_{i<=i_j<j} (dp[i][i_j] + r[i]*r[i_j]*c[j] + (dp[i_j+1][j-1] + r[i_j]*r[j]*c[j]))
    int INF = 1<<30;
    INF = INF<<30;
    vector<vector<int>> dp(n, vector<int>(n, INF));
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            dp[i][j] = 0;
        }
    }
    for(int i=n-1; i>=0; i--){
        for(int j=i+1; j<n; j++){
            dp[i][j] = dp[i][j-1] + r[i]*r[j]*c[j];
            for(int i_j=i; i_j<j; i_j++){
                dp[i][j] = min(dp[i][j], dp[i][i_j] + r[i]*r[i_j+1]*c[j] + (dp[i_j+1][j-1] + r[i_j+1]*r[j]*c[j]));
            }
        }
    }
    cout << dp[0][n-1] << endl;
    return 0;
}
