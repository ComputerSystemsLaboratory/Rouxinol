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

int dp[50010];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    rep(i, 0, 50010) dp[i] = INF;
    vector<int> c(m);
    rep(i, 0, m) cin >> c[i];
    dp[0] = 0;
    rep(i, 0, m){
        rep(j, 0, 50010){
            if(j + c[i] > 50000) continue;
            dp[j + c[i]] = min(dp[j + c[i]], dp[j] + 1);
        }
    }
    cout <<  dp[n] << endl;
}