#if 0

#endif
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <assert.h>
#include <complex>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
ll dp[101][10001];
ll vw[2][100];
ll N, W, v, w;
void dump_dp(ll dp[101][10001]) {
    for (int i = 0; i < 10001; ++i) {
        for (int j = 0; j < 101; ++j) {
            cout << dp[j][i] << " ";
        }
        cout << endl;
    }
}
void solve() {
    for (ll n = 0; n < N + 1; ++n) {
        for (ll c = 0; c < W + 1; ++c) {
            if (n == 0 || c == 0) {
                continue;
            } else if (vw[1][n - 1] > c) {
                dp[n][c] = dp[n - 1][c];
            } else {
                dp[n][c] = max(dp[n - 1][c], dp[n - 1][c - vw[1][n - 1]] + vw[0][n - 1]);
            }
        }
    }
    cout << dp[N][W] << endl;
}
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N >> W;
    for (int n = 0; n < N; ++n) {
        cin >> v >> w;
        vw[0][n] = v;
        vw[1][n] = w;
    }

    // dump_dp(dp);
    solve();

    return 0;
}
