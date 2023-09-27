#include <bits/stdc++.h>
using namespace std;
struct disjoint_set {
  int n;
  vector<int> prt;
  disjoint_set (int n) 
    : n(n)
    , prt(n, -1)
  {}
  bool is_root (int x) {return prt[x] < 0;}
  int size (int x) {return prt[find(x)];}
  bool equiv (int x, int y) {return find(x) == find(y);}
  int find (int x) {
    if (is_root(x)) return x;
    else return prt[x] = find(prt[x]);
  }
  bool unite (int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return false;
    if (size(x) < size(y)) swap(x, y);
    prt[x] += prt[y];
    prt[y] = x;
    return true;
  }
};
int main() {
  int n, q;
  cin >> n >> q;
  disjoint_set djs(n);
  while (q--) {
    int c;
    cin >> c;
    if (c) {
      int x, y;
      cin >> x >> y;
      cout << (djs.equiv(x, y)) << endl;
    } else {
      int x, y;
      cin >> x >> y;
      djs.unite(x, y);
    }
  }
  return 0;
}
