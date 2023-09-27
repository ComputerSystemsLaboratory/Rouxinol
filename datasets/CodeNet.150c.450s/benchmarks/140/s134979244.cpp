#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct edge {int u, v, cost; };

bool comp(const edge& e1, const edge& e2) {
    return e1.cost < e2.cost;
}

class UnionFind {
 public:
    int g_num;
    vector<int> rank, par;

    UnionFind() {}
    UnionFind(int size) {
        rank.resize(size, 0);
        par.resize(size, 0);
        for (int i = 0; i < size; i++) {
            par[i] = i;
            rank[i] = 0;
        }
        g_num = size;
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;

        g_num--;
        if (rank[x] > rank[y]) {
            par[y] = x;
        } else {
            par[x] = y;
            if (rank[x] == rank[y]) rank[y]++;
        }
    }

    int find(int x) {
        if (x == par[x]) return x;
        return par[x] = find(par[x]);
    }

    int group_num() {
        return g_num;
    }
};

int main(void) {
    int V, E;
    cin >> V >> E;
    UnionFind uf(V);
    vector<edge> es;
    for (int i = 0; i < E; i++) {
        int u, v, cost;
        cin >> u >> v >> cost;
        es.push_back(edge {u, v, cost});
    }
    sort(es.begin(), es.end(), comp);
    int res = 0;
    for (auto e: es) {
        if (!uf.same(e.u, e.v)) {
            uf.unite(e.u, e.v);
            res += e.cost;
        }
    }
    cout << res << endl;

    return 0;
}