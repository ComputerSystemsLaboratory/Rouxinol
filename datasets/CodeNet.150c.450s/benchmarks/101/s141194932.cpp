#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

struct UnionFindTree {
    size_t n;
    vector<int> tree;
    UnionFindTree(size_t n): n(n) {
        tree = vector<int>(n, -1);
    }
    int find_root(size_t v) {
        if (tree[v] < 0) return v;
        return tree[v] = find_root(tree[v]);
    }
    bool unite(size_t x, size_t y) {
        x = find_root(x);
        y = find_root(y);
        if (x == y) return false;
        if (rank(x) < rank(y)) swap(x, y);
        tree[x] += tree[y];
        tree[y] = x;
        return true;
    }
    bool has_same_root(size_t x, size_t y) {
        return find_root(x) == find_root(y);
    }
    size_t rank(size_t v) {
        return -tree[find_root(v)];
    }
};

int main() {
    size_t n, m;
    scanf("%zu %zu", &n, &m);

    UnionFindTree tree(n);
    for (size_t i=0; i<m; ++i) {
        size_t s, t;
        scanf("%zu %zu", &s, &t);

        tree.unite(s, t);
    }

    size_t q;
    scanf("%zu", &q);

    for (size_t i=0; i<q; ++i) {
        size_t s, t;
        scanf("%zu %zu", &s, &t);

        printf("%s\n", tree.has_same_root(s, t)? "yes":"no");
    }

    return 0;
}    