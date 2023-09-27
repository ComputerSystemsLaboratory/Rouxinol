#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct edge {int u, v, cost;};

int n;
vector<edge> G;

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

int prim() {
    sort(G.begin(), G.end(), comp);
    UnionFind uf(n);
    int res = 0;
    for (auto e: G) {
        if (!uf.same(e.u, e.v)) {
            uf.unite(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cost;
            cin >> cost;
            if (cost == -1) continue;
            G.push_back(edge {i, j, cost});
        }
    }
    int ans = prim();
    cout << ans << endl;
    return 0;
}