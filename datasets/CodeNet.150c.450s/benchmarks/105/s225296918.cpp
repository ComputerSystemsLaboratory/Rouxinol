#include <bits/stdc++.h>
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}

#ifdef DEBUG
void debug() { cerr << "\n"; }
template <class T> void debug(const T &x) { cerr << x << "\n"; }
template <class T, class... Args> void debug(const T &x, const Args &... args) {
    cerr << x << " ";
    debug(args...);
}
template <class T> void debugVector(const vector<T> &v) {
    for(const T &x : v) {
        cerr << x << " ";
    }
    cerr << "\n";
}
#else
template <class T, class... Args>
void debug(const T &x, const Args &... args) {}
template <class T> void debugVector(const vector<T> &v) {}
#endif

using ll = long long;
#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
const double EPS = 1e-7;
const int INF = 1 << 30;
const ll LLINF = 1LL << 60;
constexpr int MOD = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//-------------------------------------

void solve() {
    int N;
    cin >> N;
    vector<ll> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;
    reverse(ALL(a));
    reverse(ALL(s));
    vector<ll> base;
    for(int i = 0; i < N; i++) {
        ll v = a[i];
        sort(RALL(base));
        for(ll e : base) {
            chmin(v, v ^ e);
        }
        if(v) {
            if(s[i] == '0') {
                base.emplace_back(v);
            } else {
                cout << 1 << "\n";
                return;
            }
        }
    }
    cout << 0 << "\n";
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        solve();
    }
}