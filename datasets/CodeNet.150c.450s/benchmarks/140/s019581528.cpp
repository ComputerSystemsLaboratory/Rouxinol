#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
#define ll long long
using namespace std;

struct edge { int u,v,cost; };

struct UnionFind {
  vector<int> par;
  UnionFind(int n) : par(n, -1) { }
  int root(int x) {
    if (par[x]<0) return x;
    else return par[x]=root(par[x]);
  }
  bool issame(int x, int y) {
    return root(x) == root(y);
  }
  void merge(int x, int y) {
    x=root(x); y=root(y);
    if (x==y) return ;
    if (-par[x]<-par[y]) swap(x, y);
    par[x]+=par[y];
    par[y]=x;
  }
};

const int MAX_E=100000;

edge es[MAX_E+1];
int V,E;

bool comp(const edge& e1, const edge& e2) {
  return e1.cost<e2.cost;
}

int kruskal() {
  sort(es, es+E, comp);
  UnionFind uf(V);
  int res=0;
  for (int i=0; i<E; i++) {
    edge e=es[i];
    if (!uf.issame(e.u, e.v)) {
      uf.merge(e.u, e.v);
      res+=e.cost;
    }
  }
  return res;
}


int main() {
  cin>>V>>E;
  rep(i, E) {
    int s,t,cost;
    cin>>s>>t>>cost;
    es[i]={s,t,cost};
  }
  int res=kruskal();
  cout<<res<<endl;
}

