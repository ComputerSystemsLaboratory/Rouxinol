#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 100000;

class UnionFind {
private:
  int N;
  int par[MAX_N];
  int rank[MAX_N];

public:
  UnionFind(int size) : N(size) {
    for (int i=0; i<N; i++) {
      par[i] = i;
      rank[i] = 0;
    }
  }

  int find(int x) {
    if (par[x] == x) {
      return x;
    } else {
      return par[x] = find(par[x]);
    }
  }

  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return;

    if (rank[x] < rank[y]) {
      par[x] = y;
    } else {
      par[y] = x;
      if (rank[x] == rank[y]) rank[x]++;
    }
  }

  bool same(int x, int y) {
    return find(x) == find(y);
  }
};

int main() {
  int n, m, q;
  cin >> n >> m;
  UnionFind uf(n);

  for (int i=0; i<m; i++) {
    int s, t;
    cin >> s >> t;
    uf.unite(s, t);
  }
  cin >> q;
  for (int i=0; i<q; i++) {
    int s, t;
    cin >> s >> t;
    cout << (uf.same(s, t)?"yes":"no") << endl;
  }
  return 0;
}