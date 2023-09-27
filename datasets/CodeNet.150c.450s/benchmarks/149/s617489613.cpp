// DSL_1_A.cpp
// Set - Disjoint Set???Union Find Tree

#include <iostream>
#include <vector>
using namespace std;

class UF {
public:
    vector<int> id, rank;
    UF() {}
    UF(int size) {
        id.resize(size, 0);
        rank.resize(size, 0);
        for (int i = 0; i < size; i++) {
            id[i] = i;
        }
    }

    int root(int x) {
        if (x != id[x]) {
            id[x] = root(id[x]);
        }
        return id[x];
    }

    void same(int x, int y)
    {
        if (root(x) == root(y)) {
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }

    void unite(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        if (rank[rx] <= rank[ry]) {
            id[rx] = ry;
            if (rank[rx] == rank[ry]) {
                rank[ry]++;
            }
        }
        else {
            id[ry] = rx;
        }
    }
};

int main()
{
    int n, q;
    cin >> n >> q;
    UF uf = UF(n);
    int cmd, x, y;
    while (q--) {
        cin >> cmd >> x >> y;
        if(cmd) {
            uf.same(x, y);
        }
        else uf.unite(x, y);
    }
    return 0;
}