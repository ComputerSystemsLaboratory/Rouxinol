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

struct Edge {
  int cost, to, from;
  bool operator<(const Edge& e) const {
    return cost < e.cost;    
  }  
};

int main() {
  int n;
  cin >> n;

  vector<Edge> G;
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      int cost;
      cin >> cost;
      if ( j > i && cost >= 0 ) G.push_back({cost, i, j});      
    }
  }

  sort(G.begin(), G.end());

  UnionFind uf(n);
  int cnt = 0;
  int sum = 0;
  for ( Edge e: G ) {
    int cost = e.cost, to = e.to, from = e.from;
    if ( uf.same(to, from) ) continue;
    sum += cost;
    if ( ++cnt >= n-1 ) break;
    uf.unite(to, from);    
  }

  cout << sum << endl;
  
  return 0;
}

