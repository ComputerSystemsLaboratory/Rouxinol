#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
using namespace std;
#define INF ((1<<30)-1)
#define LINF (1LL<<60)
#define EPS (1e-10)
typedef long long ll;
typedef pair<ll, ll> P;
const int MOD = 1000000007;
const int MOD2 = 998244353;

struct UnionFind{
    vector<ll> par;
    vector<ll> sizes;
    UnionFind(ll n) : par(n), sizes(n, 1) {
        rep(i,n) par[i] = i;
    }
    int find(ll x) {
        if (x == par[x]) return x;
        return par[x] = find(par[x]);
    }
    void unite(ll x, ll y) {
        x = find(x);
        y = find(y);
        if (x == y) return;
        if (sizes[x] < sizes[y]) swap(x, y);
        par[y] = x;
        sizes[x] += sizes[y];
    }

    bool same(ll x, ll y) {
        return find(x) == find(y);
    }

    ll size(ll x) {
        return sizes[find(x)];
    }
};

struct Edge{
    ll a, b, cost;
    // コストの大小で順序定義
    bool operator<(const Edge& o) const {
        return cost < o.cost;
    }
};

// 頂点数と辺集合の組として定義したグラフ
struct Graph{
    int n;  // 頂点数
    vector<Edge> es;  // 辺集合

    // クラスカル法で無向最小全域木のコストの和を計算する
    // グラフが非連結のときは最小全域森のコストの和となる
    int kruskal() {
        // コストが小さい順にソート
        sort(es.begin(), es.end());

        UnionFind uf(n);
        int min_cost = 0;

        rep(ei, es.size()) {
            Edge& e = es[ei];
            if (!uf.same(e.a, e.b)) {
                // 辺を追加しても閉路ができないなら、その辺を採用する
                min_cost += e.cost;
                uf.unite(e.a, e.b);
            }
        }

        return min_cost;
    }
};

Graph input_graph() {
    Graph g;
    int m;
    cin >> g.n >> m;
    rep(i, m) {
        Edge e;
        cin >> e.a >> e.b >> e.cost;
        g.es.push_back(e);
    }
    return g;
}

int main(){
    Graph g = input_graph();
    cout << g.kruskal() << endl;
    return 0;
}
