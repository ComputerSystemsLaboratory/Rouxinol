#include <bits/stdc++.h>

using namespace std;

struct Kruskal {
    Kruskal() = default;

    explicit Kruskal(int n) { init(n); }

    struct UnionFind {
        vector<int> p, r;

        UnionFind() = default;

        UnionFind(int size) { init(size); }

        void init(int size) {
            p.resize(size);
            r.resize(size);
            for (int i = 0; i < size; ++i) {
                p[i] = i;
                r[i] = 1;
            }
        }

        int root(int x) {
            if (p[x] == x) return x;
            else return p[x] = root(p[x]);
        }

        void unite(int x, int y) {
            x = root(x);
            y = root(y);

            if (x == y) return;

            if (r[x] > r[y]) swap(x, y);
            r[x] += r[y];
            p[y] = x;
        }

        bool same(int x, int y) {
            return root(x) == root(y);
        }
    };

    struct edges {
        edges() = default;

        edges(int u, int v, long long cost) : u(u), v(v), cost(cost) {}

        bool operator<(const edges &e) const {
            return cost < e.cost;
        }

        int u, v;
        long long cost;
    };

    struct edge {
        edge() {}

        edge(int to, long long cost) : to(to), cost(cost) {}

        int to;
        long long cost;
    };

    vector<edges> E;
    vector<vector<edge>> G;

    void init(int n) {
        G.resize(n + 1);
    }

    void add(int u, int v, long long cost) {
        E.emplace_back(edges(u, v, cost));
    }

    void make_graph(edges e) {
        G[e.u].push_back(edge(e.v, e.cost));
        G[e.v].push_back(edge(e.u, e.cost));
    }

    long long kruskal(int n) {
        long long res = 0;
        UnionFind uf(n + 1);

        sort(E.begin(), E.end());
        for (auto &e : E) {
            if (!uf.same(e.u, e.v)) {
                res += e.cost;
                uf.unite(e.u, e.v);
                make_graph(e);
            }
        }

        return res;
    }

    long long kruskal() {
        return kruskal(G.size());
    }
};


int main() {
    int n, m;
    cin >> n >> m;

    auto g = Kruskal(n);
    for (int i = 0; i < m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        g.add(a, b, c);
    }

    cout << g.kruskal() << endl;
}
