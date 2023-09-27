#include <bits/stdc++.h>

#define _sel(_1, _2, x, ...) x
#define repn(i, n) for (ll i = 0; i < (n); i++)
#define reps(i, a, b) for (ll i = (a); i < (b); i++)
#define rep(i, ...) _sel(__VA_ARGS__, reps, repn)(i, __VA_ARGS__)
#define reppn(i, n) for (ll i = 1; i <= (n); i++)
#define repps(i, a, b) for (ll i = (a); i <= (b); i++)
#define repp(i, ...) _sel(__VA_ARGS__, repps, reppn)(i, __VA_ARGS__)
#define rrepn(i, n) for (ll i = (n) - 1; i >= 0; i--)
#define rreps(i, a, b) for (ll i = (b) - 1; i >= (a); i--)
#define rrep(i, ...) _sel(__VA_ARGS__, rreps, rrepn)(i, __VA_ARGS__)
#define rreppn(i, n) for (ll i = (n); i >= 1; i--)
#define rrepps(i, a, b) for (ll i = (b); i >= (a); i--)
#define rrepp(i, ...) _sel(__VA_ARGS__, rrepps, rreppn)(i, __VA_ARGS__)

#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define rng(v) (v).begin(), (v).end()
#define rrng(v) (v).rbegin(), (v).rend()
#define _shv(v) for (auto _t1 : v) cerr << _t1 << " "; cerr << endl;
#define dg(x) cerr << #x << ": " << (x) << endl;
#define dgv(v) cerr << #v << ": "; _shv(v);
#define dgm(m) cerr << #m << ":" << endl; for (auto _t2 : m) { _shv(_t2); }

using namespace std;
using ll = long long int;
using ld = long double;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<ll>>;
using vvb = vector<vector<bool>>;
using vvc = vector<vector<char>>;
using vvs = vector<vector<string>>;

const int INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
const int DX[4] = {1, 0, -1, 0};
const int DY[4] = {0, 1, 0, -1};

template<typename T> inline void pt(T x) { cout << x << endl; }
template<typename T> inline void inv(T& v) { for (auto& t : v) cin >> t; }
template<typename T> inline int siz(T& x) { return x.size(); }
template<typename T> inline ll pow2(T n) { return 1ll << n; }
template<typename T, typename U> inline int bit(T x, U n) { return x >> n & 1; }
template<typename T, typename U>
inline bool umax(T& m, U x) { if (m < x) { m = x; return true; } return false; }
template<typename T, typename U>
inline bool umin(T& m, U x) { if (m > x) { m = x; return true; } return false; }


int main() {
    int n; cin >> n;
    vl a(n); inv(a);
    vl d(n, INF);
    rep(i, n) {
        auto l = lower_bound(rng(d), a[i]);
        *l = a[i];
    }
    rep(i, 1, n) {
        if (d[i] == INF) {
            pt(i);
            return 0;
        }
    }
    pt(n);

    return 0;
}

