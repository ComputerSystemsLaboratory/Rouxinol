#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n - 1); i >= 0; i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) int(x.size())
#define get_unique(x) x.erase(unique(all(x)), x.end());
typedef long long ll;
typedef complex<double> Complex;
const int INF = 1e9;
const ll MOD = 1e9 + 7;
const ll LINF = 1e18;
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
void hakidashi(vector<ll>& v) {
    int pos = 0;
    for (int d = 60; d >= 0; d--) {
        bool flg = 0;
        for (int i = pos; i < sz(v); i++) {
            if (!(v[i] >> d & 1)) continue;
            flg = 1;
            swap(v[pos], v[i]);
            break;
        }

        for (int i = pos + 1; i < sz(v); i++) {
            if (v[i] >> d & 1) v[i] ^= v[pos];
        }
        if (flg) pos++;
    }
}
bool isin(vector<ll> v, ll bit) {
    ll ret = 0;
    for (ll x : v) {
        for (int d = 60; d >= 0; d--) {
            if (x >> d & 1) {
                if ((bit >> d & 1) ^ (ret >> d & 1)) ret ^= x;
                break;
            }
        }
    }
    return ret == bit;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        rep(i, n) cin >> a[i];
        string s;
        cin >> s;
        int ans = 0;
        vector<vector<ll>> dp(220);
        dp[n] = {0};
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                dp[i] = dp[i + 1];
                for (ll x : dp[i + 1]) dp[i].push_back(a[i] ^ x);
                hakidashi(dp[i]);
                dp[i].resize(64);
            } else {
                if (isin(dp[i + 1], a[i]))
                    dp[i] = dp[i + 1];
                else
                    ans = 1;
            }
        }
        cout << ans << endl;
    }
}
