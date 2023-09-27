#include <iostream>
#include <vector>

using namespace std;

class UnionFind {
private:
    vector<int> parent;

public:
    UnionFind(int n) {
        parent.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (x == parent[x]) {
            return x;
        }
        return find(parent[x]);
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);

        parent[y] = x;
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }
};

int main() {
    int n, q, x, y, com;

    cin >> n >> q;
    UnionFind tree(n);
    while (q--) {
        cin >> com >> x >> y;
        if (com == 0) {
            tree.unite(x, y);
        }
        else {
            cout << tree.same(x, y) << endl;
        }
    }

    return 0;
}