#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0, i##_len = (n); i < i##_len; i++)
#define reps(i, s, n) for(ll i = (s), i##_len = (n); i < i##_len; i++)
#define rrep(i, n) for(ll i = (n) - 1; i >= 0; i--)
#define rreps(i, e, n) for(ll i = (n) - 1; i >= (e); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define len(x) ((ll)(x).length())

const ll DT = 24 * 60 * 60 + 1;

ll f(const string &str) {
    ll h = atoi(str.substr(0, 2).c_str());
    ll m = atoi(str.substr(3, 2).c_str());
    ll s = atoi(str.substr(6, 2).c_str());
    return h * 60 * 60 + m * 60 + s;
}

void solve(ll n) {
    vector<string> st(n), en(n);
    rep(i, n) cin >> st[i] >> en[i];
    vector<ll> dp(DT + 1, 0);
    rep(i, n) {
        dp[f(st[i])]++;
        dp[f(en[i])]--;
    }
    ll ans = dp[0];
    rep(i, DT) {
        dp[i + 1] += dp[i];
        ans = max(ans, dp[i + 1]);
    }
    cout << ans << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    while(true) {
        ll n;
        cin >> n;
        if (n == 0) break;
        solve(n);
    }
    return 0;
}

