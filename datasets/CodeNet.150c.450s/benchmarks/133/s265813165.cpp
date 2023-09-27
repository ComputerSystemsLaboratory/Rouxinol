#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n - 1); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll MOD = 1e9 + 7;
const ll LINF = 1e18;
template <class T>
void get_unique(vector<T>& x) {
    x.erase(unique(x.begin(), x.end()), x.end());
}
template <class T>
bool chmax(T& a, const T& b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T& a, const T& b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
vector<T> make_vec(size_t a) {
    return vector<T>(a);
}
template <class T, class... Ts>
auto make_vec(size_t a, Ts... ts) {
    return vector<decltype(make_vec<T>(ts...))>(a, make_vec<T>(ts...));
}
template <typename T>
ostream& operator<<(ostream& os, vector<T> v) {
    for (int i = 0; i < sz(v); i++) {
        os << v[i];
        if (i < sz(v) - 1) os << " ";
    }
    return os;
}
int main() {
    int d;
    cin >> d;
    vector<int> c(26);
    rep(i, 26) cin >> c[i];
    vector<vector<int>> s(d, vector<int>(26));
    rep(i, d) rep(j, 26) cin >> s[i][j];

    vector<int> t(d);
    rep(i, d) cin >> t[i], t[i]--;

    int ans = 0;
    vector<int> last(26, -1);
    rep(i, d) {
        ans += s[i][t[i]];
        last[t[i]] = i;
        rep(j, 26) ans -= c[j] * (i - last[j]);
        cout << ans << '\n';
    }
}