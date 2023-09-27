#include <iostream>
#include <vector>
using namespace std;

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
    int n, m, a, b, q;
    cin >> n >> m;
    UnionFind uf(n);
    for (int i= 0; i < m; i++) {
        cin >> a >> b;
        uf.unite(a, b);
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << (uf.same(a, b) ? "yes":"no") << endl;
    }
    return 0;
}