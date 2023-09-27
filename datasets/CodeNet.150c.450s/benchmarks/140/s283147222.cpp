#include <algorithm>
#include <iostream>
using namespace std;
#define MAX_E 100000
#define MAX_V 10000

struct edge {
  int u, v, cost;
};

int V, E;
edge es[MAX_E];
int par[MAX_V];
int r[MAX_V];

void init_union_find(int v) {
  for(int i = 0; i < v; i++) {
    par[i] = i;
    r[i] = 0;
  }
}

int find(int x) {
  if(par[x] == x) return x;
  else return par[x] = find(par[x]);
}

void unite(int x, int y) {
  x = find(x);
  y = find(y);
  if(x == y) return ;

  if(r[x] < r[y]) {
    par[x] = y;
  } else {
    par[y] = x;
    if(r[x] == r[y]) r[x]++;
  }
}

bool same(int x, int y) {
  return find(x) == find(y);
}

bool comp(const edge& e1, const edge& e2) {
  return e1.cost < e2.cost;
}

int kruskal() {
  sort(es, es + E, comp);
  init_union_find(V);
  int res = 0;
  for(int i = 0; i < E; i++) {
    edge e = es[i];
    if(!same(e.u, e.v)) {
      unite(e.u, e.v);
      res += e.cost;
    }
  }
  return res;
}

int main () {
  cin >> V >> E;

  for(int i = 0; i < E; i++) {
    int v1, v2, c;
    cin >> v1 >> v2 >> c;
    es[i].u = v1;
    es[i].v = v2;
    es[i].cost = c;
  }

  cout << kruskal() << endl;

}