#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX_N = 10000;

struct UnionFind
{
  int par[MAX_N];
  int rank[MAX_N];

  void init(int n){
    for(int i = 0; i < n; i++){
      par[i] = i;
      rank[i] = 0;
    }
  }

  int find(int x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
  }

  void unite(int x, int y){
    x = find(x);
    y = find(y);

    if(x == y) return;
    
    if(rank[x] < rank[y]) par[x] = y;
    else{
      par[y] = x;
      if(rank[x] == rank[y]) rank[x]++;
    }
  }

  bool same(int x, int y){
    return find(x) == find(y);
  }
};


struct Edge{
  int u, w, cost;
};

bool comp(const Edge &e1, const Edge &e2)
{
  return e1.cost < e2.cost;
}

const int MAX_E = 100000;
Edge es[MAX_E];
int v, e;


int kruskal()
{
  sort(es, es + e, comp);
  UnionFind uf;
  uf.init(v);
  int ans = 0;

  for(int i = 0; i < e; i++){
    Edge et = es[i];

    if(!uf.same(et.u, et.w)){
      uf.unite(et.u, et.w);
      ans += et.cost;
    }
  }

  return ans;
}


int main()
{
  int gv, ge;
  cin >> gv >> ge;
  v = gv;
  e = ge;
  for(int i = 0; i < e; i++){
    Edge et;
    cin >> et.u >> et.w >> et.cost;
    es[i] = et;
  }

  cout << kruskal() << endl;
}