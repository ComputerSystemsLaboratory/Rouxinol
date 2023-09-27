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
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
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
int f(string s) {
    string hh, mm, ss;
    hh = s.substr(0, 2);
    mm = s.substr(3, 2);
    ss = s.substr(6, 2);
    return 3600 * stoi(hh) + 60 * stoi(mm) + stoi(ss);
}
int main() {
    while (1) {
        int n;
        cin >> n;
        if (!n) return 0;
        vector<int> v(90001);
        rep(i, n) {
            string s, t;
            cin >> s >> t;
            v[f(s)]++;
            v[f(t)]--;
        }
        int ans = 0;
        rep(i, 90000) {
            v[i + 1] += v[i];
            chmax(ans, v[i]);
        }
        cout << ans << endl;
    }
}
