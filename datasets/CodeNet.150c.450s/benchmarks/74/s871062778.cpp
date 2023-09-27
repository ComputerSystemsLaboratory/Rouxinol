#include <bits/stdc++.h>  

using namespace std;

//#define int long long
#define FOR(i, j, k) for(int i = j; i < (int)k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define INF (1 << 30)

typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> Pi;

const int MOD = 1e9 + 7;
const int dy[] = {0, 0, 1, -1};
const int dx[] = {1, -1, 0, 0};

template <class T> void chmin(T& a, const T& b) { a = min(a, b); }
template <class T> void chmax(T& a, const T& b) { a = max(a, b); }

int dp[21][50001];

signed main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, c[20];
    cin >> n >> m;
    rep(i, m) rep(j, n + 1) dp[i][j] = INF;
    dp[0][0] = 0;
    rep(i, m) cin >> c[i];
    rep(i, m) rep(j, n + 1) {
        if(c[i] > j) dp[i + 1][j] = dp[i][j];
        else dp[i + 1][j] = min(dp[i][j], dp[i + 1][j - c[i]] + 1);
    }
    cout << dp[m][n] << endl;
    return 0;
}