#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
typedef long long ll;
#define ALL(v) v.begin(), v.end()
#define vmax(v) *max_element(ALL(v))
#define vmin(v) *min_element(ALL(v))
#define chmax(x, a) x = max(x, a)
#define chmin(x, a) x = min(x, a)

int main() {
    int D; cin >> D;
    vector<ll> c(26);
    rep(i, 26) cin >> c[i];
    vector<vector<ll>> s(D, vector<ll>(26));
    rep(i, D)rep(j, 26) cin >> s[i][j];
    vector<ll> t(D);
    rep(i, D) cin >> t[i];
    ll ans = 0;
    vector<ll> last(26);
    for (int d = 1; d <= D; d++) {
        for (int i = 1; i <= 26; i++) {
            if (t[d-1] == i) {
                ans += s[d-1][i-1];
                last[i-1] = d;
            }
            else {
                ans -= c[i-1]*(d-last[i-1]);
            }
        }
        cout << ans << endl;
    }
}