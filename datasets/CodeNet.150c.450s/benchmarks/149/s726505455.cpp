#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  UnionFind(size_t size) : v(size, -1) {}
  vector<int> v;

  int root(int x) {
    return (v[x] < 0 ? x : v[x] = root(v[x]));
  }

  bool same(int x, int y) {
    return root(x) == root(y);
  }

  void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x != y) {
      if (v[x] > v[y]) swap(x, y);
      v[x] += v[y];
      v[y] = x;
    }
  }

  int size(int x) {
    return -v[x];
  }
};

int main() {
  int n, q;
  scanf("%d %d", &n, &q);

  UnionFind uf(n);
  while (q--) {
    int c, x, y;
    scanf("%d %d %d", &c, &x, &y);
    if (c) {
      cout << uf.same(x, y) << endl;
    } else {
      uf.unite(x, y);
    }
  }
}