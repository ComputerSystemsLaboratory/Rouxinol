#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
  vector<int> data;
  UnionFind(int size) : data(size, -1) {}
  bool unite(int x, int y) {
    x = find(x); y = find(y);
    if (x != y) {
      if (data[y] < data[x]) swap(x, y);
      data[x] += data[y]; data[y] = x;
    }
    return x != y;
  }
  bool same(int x, int y) {
    return find(x) == find(y);
  }
  int find(int x) {
    if (data[x] < 0) return x;
    return data[x] = find(data[x]);
  }
  int size(int x) {
    return -data[find(x)];
  }
};

int main()
{
  int n, q;
  cin >> n >> q;

  UnionFind uf(n);

  for (int i = 0; i < q; i++) {
    int com, x, y;
    cin >> com >> x >> y;

    if (com == 1) {
      cout << uf.same(x, y) << endl;
    } else if (com == 0) {
      uf.unite(x, y);
    }
  }

  return (0);
}