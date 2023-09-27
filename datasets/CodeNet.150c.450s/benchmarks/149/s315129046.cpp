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
    int32_t n, q;
    scanf("%d %d", &n, &q);

    UnionFindTree uf(n);

    for (int32_t i = 0; i < q; i++) {
        int32_t com, x, y;
        scanf("%d %d %d", &com, &x, &y);

        if (com) printf("%d\n", uf.same(x, y) ? 1 : 0);
        else uf.unite(x, y);
    }

    return 0;
}