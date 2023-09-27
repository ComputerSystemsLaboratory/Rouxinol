#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define REP(i, n) for(int (i)=0; (i)< (n); ++i)
#define REPR(i, n) for(int (i)=(n); (i)>=0; --i)
#define FOR(i, n, m) for(int (i)=(n); (i)<(m); ++i)

struct UnionFind{
  vector<int> par;
  vector<int> sizes;
  UnionFind(int n): par(n), sizes(n, 1){
    REP(i, n) par[i]=i;
  }
  int find(int x){
    if (x==par[x]) return x;
    return par[x] = find(par[x]);
  }
  void unite(int x, int y){
    x = find(x);
    y = find(y);
    if (x==y) return;
    if (sizes[x] < sizes[y]) swap(x, y);
    par[y] = x;
    sizes[x] += sizes[y];
  }
  bool same(int x, int y){
    return find(x) == find(y);
  }
  int size(int x){
    return sizes[find(x)];
  }
};

struct Edge{
  int a, b, cost;
  Edge(int a=0, int b=0, int cost=0){
   this->a = a;
   this->b = b;
   this->cost = cost;
  }
  bool operator<(const Edge &o) const{
    return cost < o.cost;
  }
};

vector<Edge> kruskal(vector<Edge> & E, int N){
  vector<Edge> ans;
  sort(E.begin(), E.end());
  UnionFind uf(N);
  for(auto e : E){
    if(!uf.same(e.a, e.b)){
      ans.push_back(e);
      uf.unite(e.a, e.b);
    }
  }
  return ans;
}
int main(){
  int V, E;
  cin >> V >> E;
  vector<Edge> edge(E);
  REP(i, E){
    int s, t, w;
    cin >> s >> t >> w;
    edge[i] = Edge(s, t, w);
  }
  vector<Edge> kr = kruskal(edge, V);
  ll ans = 0;
  REP(i, kr.size()){
    ans += kr[i].cost;
  }
  cout << ans << endl;
  return 0;
}

