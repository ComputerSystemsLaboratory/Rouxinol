#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vl;
typedef pair<ll, ll> PP;
#define rep(i, n) for (ll i = 0; i < ll(n); i++)
#define all(v) v.begin(), v.end()
bool chmin(ll& a, ll b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}
bool chmax(ll& a, ll b) {
    if (b > a) {
        a = b;
        return 1;
    }
    return 0;
}
const ll INF = 999999999999999;
const ll MOD = 1000000007;
const ll MAX_N = 500010;
ll a, b, c, d, e, f, p, t, x, y, z, q, m, n, r, h, k, w, l, ans;

int main() { string S1, S2;
    cin >> S1 >> S2;
    n = S1.length();
    m = S2.length();

    ll dp[n + 1][m + 1];
    rep(i,n+1){
        rep(j, m + 1) { dp[i][j] = INF;
            if (i == 0 && j == 0) dp[i][j] = 0;
            if (i > 0) chmin(dp[i][j], dp[i - 1][j] + 1);
            if (j > 0) chmin(dp[i][j], dp[i][j - 1] + 1);
            if(i>0&&j>0)
                chmin(dp[i][j], dp[i - 1][j - 1] + (S1[i - 1] != S2[j - 1]));
        }
    }

    cout << dp[n][m] << endl;
}

