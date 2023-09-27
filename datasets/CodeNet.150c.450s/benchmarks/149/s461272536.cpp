#include <bits/stdc++.h>

using namespace std;

class UnionFind {
private:
  int n;
  vector<int> a;
public:
  UnionFind(int n) : n(n), a(n, -1) {}
  int find(int x) {return a[x] < 0 ? x : (a[x] = find(a[x]));}
  bool equal(int x, int y) {return find(x) == find(y);}
  void unite(int x, int y) {
    x = find(x), y = find(y);
    if (x == y) return;
    if (a[x] > a[y]) swap(x, y);
    a[x] += a[y];
    a[y] = x;
    --n;
  }
  int size() {return n;}
  int size(int x) {return -a[find(x)];}
};

int main() {
  int n, q;
  cin >> n >> q;
  UnionFind uf(n);
  for (int i = 0; i < q; ++i) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      uf.unite(x, y);
    } else {
      cout << (uf.equal(x, y) ? 1 : 0) << endl;
    }
  }
}