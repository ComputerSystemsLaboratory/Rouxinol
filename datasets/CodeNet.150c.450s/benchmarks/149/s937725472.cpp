#include <bits/stdc++.h>

using namespace std;

struct UnionFind {
  int size;
  int *par, *rk;

  UnionFind(int size) : size(size) {
    par = new int[size];
    rk = new int[size];
    for(int i = 0; i < size; i++) {
      par[i] = i;
      rk[i] = 0;
    }
  }

  int find(int x) {
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
  }

  void unite(int x, int y) {
    x = find(x); y = find(y);
    if(rk[x] < rk[y]) {
      par[x] = y;
    }else if(rk[x] > rk[y]) {
      par[y] = x;
    } else {
      par[x] = y;
      rk[y] += 1;
    }
  }

  bool same(int x, int y) {
    return find(x) == find(y);
  }
};

int main() {
  int n, q; cin >> n >> q;
  UnionFind uf(n);
  for(int i = 0; i < q; i++) {
    int com, x, y; cin >> com >> x >> y;
    if(com == 0) uf.unite(x, y);
    else cout << (uf.same(x, y) ? 1 : 0) << endl;
  }

}