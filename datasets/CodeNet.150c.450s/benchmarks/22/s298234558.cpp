// aribon2-5-4_a
#include <bits/stdc++.h>
#ifdef LOCAL
#include "../cxx-prettyprint/prettyprint.hpp"
#endif
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

#define REP(i, n) for (int (i) = 0 ; (i) < (int)(n) ; ++(i))
#define REPN(i, m, n) for (int (i) = m ; (i) < (int)(n) ; ++(i))
#define REP_REV(i, n) for (int (i) = (int)(n) - 1 ; (i) >= 0 ; --(i))
#define REPN_REV(i, m, n) for (int (i) = (int)(n) - 1 ; (i) >= m ; --(i))
#define ALL(x) x.begin(), x.end()

#define MOD (1000000007)

#define print2D(h, w, arr) REP(i, h) { REP(j, w) cout << arr[i][j] << " "; cout << endl; }
template<class T> void print(const T& x){cout << x << endl;}
template<class T, class... A> void print(const T& first, const A&... rest) { cout << first << " "; print(rest...); }
struct PreMain {PreMain(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(20);}} premain;


template<typename T>
struct BellmanFord{
    struct edge {
        int u, v;
        T w;
        edge() {}
        edge(int u, int v, T w) : u(u), v(v), w(w) {}
        friend ostream& operator<<(ostream& os, const edge& e) {cout << "(" << e.u << "->" << e.v << "," << e.w << ")"; return os;}
    };

    int n;
    vector< vector<int> > G;
    vector<int> used;
    vector<edge> edges;
    vector<T> ds;
    T INF;

    explicit BellmanFord(int n) : n(n), G(n), used(n, 0) { INF = numeric_limits<T>::max(); }

    void add_edge(int u, int v, T c) {
        edges.emplace_back(u, v, c);
        G[u].emplace_back(v);
    }

    T get_shortest_path(int s, int t, bool &neg_loop){
        ds.assign(n, INF);
        ds[s] = 0;

        for (int j = 0; j < n; j++) {
            bool update = false;
            for (auto e:edges) {
                if (ds[e.u] == INF) continue;

                if (ds[e.u] + e.w < ds[e.v]) {
                    ds[e.v] = ds[e.u] + e.w;
                    update = true;
                }
            }

            if (!update) break;

            if (j == n - 1) {
                neg_loop = true;
                return INF;
            }
        }
        neg_loop = false;
        return ds[t];
    }
};


int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N, M, S;
    cin >> N >> M >> S;

    BellmanFord<ll> g(N);
    REP(i, M){
        int s, t, d;
        cin >> s >> t >> d;
        g.add_edge(s, t, d);
    }

    bool negloop;
    g.get_shortest_path(S, N-1, negloop);

    if (negloop){
        print("NEGATIVE CYCLE");
    } else {
        REP(i, N){
            ll d = g.ds[i];
            if (d == g.INF) {
                print("INF");
            } else {
                print(d);
            }
        }
    }


    return 0;
}

