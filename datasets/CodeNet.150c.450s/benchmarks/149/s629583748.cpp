#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct UnionFind {
  int *par, *rk;
  UnionFind(int maxIndex) {
    par = new int[maxIndex + 1];
    rk = new int[maxIndex + 1];
    for (int i = 0; i <= maxIndex; i++) {
      par[i] = i;
      rk[i] = 0;
    }
  }

  int find(int a) {
    if (par[a] == a)
      return a;
    return par[a] = find(par[a]);
  }

  void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (rk[a] > rk[b]) {
      par[b] = a;
    } else if(rk[a] < rk[b]) {
      par[a] = b;
    } else {
      par[a] = b;
      rk[b] += 1;
    }
  }

  bool same(int a, int b) {
    return find(a) == find(b);
  }
};

int main() {
  int n, q;
  cin >> n >> q;
  UnionFind uf(n - 1);
  for (int i = 0; i < q; i++) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      uf.unite(x, y);
    } else {
      cout << (uf.same(x, y) ? 1 : 0) << endl;
    }
  }

}