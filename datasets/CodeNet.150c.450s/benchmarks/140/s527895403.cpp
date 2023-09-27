#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
using ll = long long;

class Union_Find{
  vector<int> par; vector<int> rank; vector<int> num;
public:
  Union_Find(int n) {
    par = vector<int>(n); rank = vector<int>(n,0); num = vector<int>(n,1);
    rep(i,n) par[i] = i;
  }
  int find(int x) {
    if(par[x] == x) return x;
    else  return par[x] = find(par[x]);
  }
  int number(int x) {
    return num[find(x)];
  }
  void unite(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return;
    if (rank[x] < rank[y]) swap(x, y);
    if (rank[x] == rank[y]) rank[x]++;
    par[y] = x;
    num[x] += num[y];
  } 
  bool same(int x, int y) {
    return find(x) == find(y);
  }
};

struct edge {int u, v; ll cost;};

bool comp(const edge& e1, const edge& e2){
  return e1.cost < e2.cost;
}

vector<edge> es;

int kruskal(int n) {
  sort(es.begin(),es.end(),comp);
  Union_Find uf(n);
  ll res = 0;
  for(auto e : es) {
    if(!uf.same(e.u,e.v)){
      uf.unite(e.u,e.v);
      res += e.cost;
    }
  }
  return res;
}

int main() {
  int n, m;
  cin >> n >> m;
  rep(i,m) {
    int x, y; ll w;
    cin >> x >> y >> w;
    es.push_back(edge{x,y,w});
  }
  cout << kruskal(n) << endl;
}
