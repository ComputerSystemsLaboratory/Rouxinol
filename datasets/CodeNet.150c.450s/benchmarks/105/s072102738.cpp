#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ALL(v) (v).begin(), (v).end()
using ll = long long;
using P = pair<int, int>;
constexpr int INF = 1e9;
constexpr long long LINF = 1e18;
constexpr long long MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    ll a[n];
    rep(i, n) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    reverse(a, a + n);
    reverse(ALL(s));
    vector<ll> bs;
    rep(i, n) {
        for (auto b : bs) {
            a[i] = min(a[i], a[i] ^ b);
        }
        if (s[i] == '0') {
            if (a[i] != 0) bs.emplace_back(a[i]);
        } else {
            if (a[i]) {
                cout << 1 << endl;
                return;
            }
        }
    }
    cout << 0 << endl;
}

signed main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}