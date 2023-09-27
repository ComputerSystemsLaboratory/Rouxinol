#include <bits/stdc++.h>
using namespace std;

struct UnionFind{
  int n;
  vector<int> r, p;
  UnionFind() {}
  UnionFind(int sz): n(sz), r(sz, 1), p(sz, 0){ iota(p.begin(), p.end(), 0); }
  int find(int x) {
    return (x == p[x] ? x : p[x] = find(p[x]));
  }
  bool same(int x, int y) {
    return find(x) == find(y);
  }
  void unite(int x, int y){
    x = find(x); y = find(y);
    if ( x == y ) return;
    if ( r[x] < r[y] ) swap(x, y);
    r[x] += r[y];
    p[y] = x;
  }
};

int main() {
  int n, m;
  cin >> n >> m;

  UnionFind uf(n);
  for ( int i = 0; i < m; i++ ) {
    int s, t;
    cin >> s >> t;
    uf.unite(s, t);
  }

  int q;
  cin >> q;
  for ( int i = 0; i < q; i++ ) {
    int s, t;
    cin >> s >> t;
    if ( uf.same(s, t) ) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  
  return 0;
}

