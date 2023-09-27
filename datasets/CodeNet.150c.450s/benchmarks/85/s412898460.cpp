#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const int inf = 1e9;
double pi = 3.14159265359;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, b, a) for (int i = a - 1; i >= b; i--)
using Graph = vector<vector<int>>;
using pint = pair<int, int>;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int dxx[8] = {1, 1, 1, 0, 0, -1, -1, -1}, dyy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int n;
    cin >> n;
    int p[n + 1];
    rep (i, 1, n + 1) cin >> p[i - 1] >> p[i];
    int dp[n + 1][n + 1]; // i->jまでの計算をする時の最小回数
    rep (i, 0, n + 1) dp[i][i] = 0;
    rep (i, 2, n + 1) {
        rep (j, 1, n - i + 2) {
            int k = i + j - 1;
            dp[j][k] = inf;
            rep (l, j, k) {
                dp[j][k] = min (dp[j][k], dp[j][l] + dp[l + 1][k] +
                                              p[j - 1] * p[l] * p[k]);
            }
        }
    }
    cout << dp[1][n] << "\n";
}
