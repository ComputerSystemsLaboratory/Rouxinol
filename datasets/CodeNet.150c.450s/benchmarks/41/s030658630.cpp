#pragma GCC optimize ("O3")

#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include <prettyprint.hpp>
#define debug(...)  cerr << "[" << #__VA_ARGS__ << "]: ", d_err(__VA_ARGS__);
#else
#define debug(...) 83;
#endif

void d_err() {
    cerr << endl;
}

template <typename H, typename... T>
void d_err(H h, T... t) {
    cerr << h << " ";
    d_err(t...);
}

template <typename T>
void print(T x) {
    cout << x << "\n";
}

#define ALL(x) (x).begin(), (x).end()
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define REVFOR(i, m, n) for (int i = (n - 1); i >= (m); --i)
#define REP(i, n) FOR(i, 0, n)
#define REVREP(i, n) REVFOR(i, 0, n)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define bcnt __builtin_popcountll

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll,ll> Pll;
typedef pair<int,int> Pin;

ll INF = 1e16;
int inf = 1e9;
const ll MOD = 10007;

struct WarshallFloyd{
    int n;
    vector<vll> d;

    WarshallFloyd(int n) : n(n), d(n, vll(n, INF)) {
        REP(i, n) d[i][i] = 0;
    }

    void add_edge(int s, int t, ll c) {
        d[s][t] = c;
    }

    ll query(int s, int t) {
        return d[s][t];
    }

    WarshallFloyd& operator()() {
        REP(k, n) {
            REP(i, n) REP(j, n) {
                if (d[i][k] == INF || d[k][j] == INF) continue;
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }

        return *this;
    }
};

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(20);

    int v, e; cin >> v >> e;

    WarshallFloyd g(v);

    REP(i, e) {
        ll s, t, d; cin >> s >> t >> d;
        g.add_edge(s, t, d);
    }

    g();

    bool neg = false;
    REP(i, v) {
        if (g.query(i, i) < 0) neg = true;
    }

    if (neg) {
        print("NEGATIVE CYCLE");
        return 0;
    }

    REP(i, v) {
        REP (j, v) {
            if (j > 0) cout << " ";
            ll c = g.query(i, j);
            if (c == INF) cout << "INF";
            else cout << c;
        }
        cout << "\n";
    }
}
