#include <iostream>
#include <vector>

using namespace std;

class UnionFindTree {
private:
    vector<int32_t> parent, rank;

    int32_t find(int32_t x) {
        if (parent[x] == x) {
            return x;
        } else {
            int32_t p = find(parent[x]);
            parent[x] = p;
            return p;
        }
    }

public:
    UnionFindTree(int32_t n) {
        parent.resize(n);
        rank.resize(n);

        for (int32_t i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    void unite(int32_t x, int32_t y) {
        x = find(x);
        y = find(y);

        if (x == y) return;

        if (rank[x] < rank[y]) {
            parent[x] = y;
        } else {
            parent[y] = x;
            if (rank[x] == rank[y]) rank[x]++;
        }
    }

    bool same(int32_t x, int32_t y) {
        return find(x) == find(y);
    }
};

int main() {
    int32_t n, m;
    cin >> n >> m;

    UnionFindTree uf(n);

    for (int32_t i = 0; i < m; i++) {
        int32_t s, t;
        cin >> s >> t;

        uf.unite(s, t);
    }

    int32_t q;
    cin >> q;

    for (int32_t i = 0; i < q; i++) {
        int32_t s, t;
        cin >> s >> t;

        cout << (uf.same(s, t) ? "yes" : "no") << endl;
    }

    return 0;
}