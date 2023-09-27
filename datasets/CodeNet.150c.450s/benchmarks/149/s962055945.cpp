#include <iostream>
#include <vector>
using namespace std;

// ??????: http://tubo28.me/algorithm/union-find/
struct UnionFind {
    vector<int> parent;
    int set_num;

    UnionFind(int n) {
        parent.resize(n, -1);
        set_num = n;
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);

        if (x != y) {
            // ????´???°????°?????????????
            // big < small
            if (size(x) < size(y)) swap(x, y);
            parent[x] += parent[y];
            parent[y] = x;
            set_num--;
        }
    }

    bool is_same(int x, int y) {
        return find(x) == find(y);
    }

    int find(int x) {
        if (parent[x] < 0) {
            return x;
        }
        return parent[x] = find(parent[x]);
    }

    int size(int x) {
        return -parent[find(x)];
    }

    int size() {
        return set_num;
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    UnionFind uf(n);

    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            uf.unite(x, y);
        } else {
            cout << (uf.is_same(x, y) ? 1 : 0) << endl;
        }
    }
    return 0;
}