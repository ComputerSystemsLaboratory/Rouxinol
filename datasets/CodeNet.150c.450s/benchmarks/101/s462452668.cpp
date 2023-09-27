#include <bits/stdc++.h>
using namespace std;

/* UnionFind：素集合系管理の構造体(union by size)
    isSame(x, y): x と y が同じ集合にいるか。 計算量はならし O(α(n))
    unite(x, y): x と y を同じ集合にする。計算量はならし O(α(n))
    treeSize(x): x を含む集合の要素数。
*/
struct UnionFind {
    vector<int> size, parents;
    UnionFind() {}
    UnionFind(int n) {  // make n trees.
        size.resize(n, 0);
        parents.resize(n, 0);
        for (int i = 0; i < n; i++) {
            makeTree(i);
        }
    }
    void makeTree(int x) {
        parents[x] = x;  // the parent of x is x
        size[x] = 1;
    }
    bool isSame(int x, int y) { return findRoot(x) == findRoot(y); }
    void unite(int x, int y) {
        x = findRoot(x);
        y = findRoot(y);
        if (size[x] > size[y]) {
            parents[y] = x;
            size[x] += size[y];
        } else {
            parents[x] = y;
            size[y] += size[x];
        }
    }
    int findRoot(int x) {
        if (x != parents[x]) {
            parents[x] = findRoot(parents[x]);
        }
        return parents[x];
    }
    int treeSize(int x) { return size[findRoot(x)]; }
};

int main() {
    int n, m;
    cin >> n >> m;

    UnionFind uf(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        uf.unite(a, b);
    }

    int q;
    cin >> q;
    vector<int> s(q), t(q);
    for (int i = 0; i < q; i++) {
        cin >> s.at(i) >> t.at(i);
    }

    for (int i = 0; i < q; i++) {
        if (uf.isSame(s[i], t[i])) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}

