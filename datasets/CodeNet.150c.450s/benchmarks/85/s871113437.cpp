#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vc = vector<char>;
using vb = vector<bool>;
using vs = vector<string>;
using vll = vector<long long>;
using vp = vector<pair<int, int>>;
using vvi = vector<vector<int>>;
using vvc = vector<vector<char>>;
using vvll = vector<vector<long long>>;
template<class T> inline bool chmax(T &a, T b) { if (a<b) {a=b; return 1;} return 0;}
template<class T> inline bool chmin(T &a, T b) { if (b<a) {a=b; return 1;} return 0;}

const int INF = 1001001001;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vi a(n+1);
    rep(i, n) {
        int r, c;
        cin >> r >> c;
        if (i == 0) {
            a[i] = r;
            a[i+1] = c;
        } else {
            a[i+1] = c;
        }
    }

    vvi dp(n+1, vi(n+1, INF));
    for (int i = 1; i <= n; ++i) dp[i][i] = 0;
    // kが間隔
    for (int k = 1; k <= n - 1; ++k) {
        // iが始点
        for (int i = 1; i + k <= n; ++i) {
            // jが間の点
            for (int j = i; j <= i + k - 1; ++j) {
                chmin(dp[i][i+k], dp[i][j] + dp[j+1][i+k] + a[i-1]*a[j]*a[i+k]);
            }
        }
    }

    // for (int i = 1; i <= n; ++i) {
    //     for (int j = i+1; j <= n; ++j) {
    //         for (int k = i; k <= j-1; ++k) {
    //             chmin(dp[i][j], dp[i][k] + dp[k+1][j] + a[i-1] * a[k] * a[j]);
    //         }
    //     }
    // }
    // だと更新順がダメ
    
    cout << dp[1][n] << endl;
}
