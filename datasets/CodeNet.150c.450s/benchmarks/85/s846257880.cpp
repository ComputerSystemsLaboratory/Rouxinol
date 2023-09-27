#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
typedef long long ll;
#define MOD 1000000007
using namespace std;
ll n;
vector<ll> r(100), c(100);
vector<vector<ll> > dp(101, vector<ll>(101, -1));
int dfs(int v, int w) {
    // cout << v << ":" << w << endl;
    if(dp[v][w] != -1) {
        return dp[v][w];
    } else {
        ll tmp = INT_MAX / 3;
        for(int i = v + 1; i < w; i++) {
            tmp = min(tmp, dfs(v, i) + dfs(i, w) + r[v] * r[i] * c[w - 1]);
        }
        dp[v][w] = tmp;
        return tmp;
    }
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> r[i] >> c[i];
    }
    for(int i = 0; i < n; i++) {
        dp[i][i] = 0;
        dp[i][i + 1] = 0;
    }
    dfs(0, n);
    cout << dp[0][n] << endl;
}
