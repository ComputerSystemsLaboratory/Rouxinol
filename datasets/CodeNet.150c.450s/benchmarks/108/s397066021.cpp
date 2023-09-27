#include <bits/stdc++.h>
using namespace std;

#define rep(i, m, n) for(int(i) = (int)(m); i < (int)(n); ++i)
#define rep2(i, m, n) for(int(i) = (int)(n)-1; i >= (int)(m); --i)
#define REP(i, n) rep(i, 0, n)
#define REP2(i, n) rep2(i, 0, n)
#define all(hoge) (hoge).begin(), (hoge).end()
#define en '\n'
using ll = long long;
using ull = unsigned long long;
using ld = long double;
template <class T>
using vec = vector<T>;
template <class T>
using vvec = vector<vec<T>>;
typedef pair<ll, ll> P;
constexpr long long INF = 1LL << 60;
constexpr int INF_INT = 1 << 25;
constexpr long long MOD = (ll)1e9 + 7;
//constexpr long long MOD = 998244353LL;
using ld = long double;
static const ld pi = 3.141592653589793L;
typedef vector<ll> Array;
typedef vector<Array> Matrix;

template <class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

struct Edge {
    ll to, rev;
    long double cap;
    Edge(ll _to, long double _cap, ll _rev) {
        to = _to;
        cap = _cap;
        rev = _rev;
    }
};
using Edges = vector<Edge>;
using Graph = vector<Edges>;

void add_edge(Graph &G, ll from, ll to, long double cap, bool revFlag,
              long double revCap) {
    G[from].push_back(Edge(to, cap, (ll)G[to].size()));
    if(revFlag)
        G[to].push_back(Edge(from, revCap, (ll)G[from].size() - 1));
}

void solve() {
    ll n;
    cin >> n;
    vvec<int> g(n);
    REP(i, n) {
        int u, k;
        cin >> u >> k;
        u--;
        REP(i, k) {
            int v;
            cin >> v;
            v--;
            g[u].push_back(v);
        }
    }
    vec<ll> d(n, INF);
    queue<ll> que;
    que.push(0);
    d[0] = 0;
    while(que.size()) {
        int v = que.front();
        que.pop();
        for(auto to : g[v]) {
            if(d[to] != INF)
                continue;
            d[to] = d[v] + 1;
            que.push(to);
        }
    }

    REP(i, n) {
        if(d[i] == INF)
            cout << i + 1 << " " << -1 << en;
        else
            cout << i + 1 << " " << d[i] << en;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    /*
    ll t;
    cin >> t;
    REP(i, t) { solve();}
    */

    return 0;
}

