#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
template<class T> bool chmin(T &a, T b) {if(a>b) {a=b;return 1;}return 0;}
using namespace std;
using ll = long long;
const int inf = 1e8;

int dp[105][105];

int main() {
    int n;
    cin >> n;
    vector<int> p(n+1);
    cin >> p[0] >> p[1];
    rep(i,n-1) {
        int a, b;
        cin >> a >> b;
        p[i+2] = b;
    }
    rep(i,105)rep(j,105) dp[i][j] = inf;
    rep(i,n+1) dp[i][i] = 0;
    for (int i = n-1; i >= 1; i--) {
        for (int j = i+1; j <= n; j++) {
            if (j == i+1) dp[i][j] = p[i-1]*p[i]*p[i+1];
            else {
                for (int k = i; k <= j-1; k++) {
                    dp[i][j] = min(dp[i][j],dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j]);
                }
            }
        }
    }
    cout << dp[1][n] << endl;
}
