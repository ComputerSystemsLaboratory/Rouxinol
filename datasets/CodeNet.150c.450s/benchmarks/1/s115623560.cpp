#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;

int dp[100010];
int n, a[100010];

int lis(){
    fill(dp, dp + n, INF);
    for(int i = 0; i < n; i++){
        *lower_bound(dp, dp + n, a[i]) = a[i];
    }
    return lower_bound(dp, dp + n, INF) - dp;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    rep(i, 0, n) cin >> a[i];
    cout << lis() << endl;
}