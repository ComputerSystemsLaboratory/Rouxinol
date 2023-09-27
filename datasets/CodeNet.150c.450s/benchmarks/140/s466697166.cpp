#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

typedef long long ll;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

vector<int> par;
vector<int> Rank;

void init(int n){
  for(int i = 0; i < n; i++){
    par[i] = i;
    Rank[i] = 0;
  }
}

int find(int x){
  if(par[x] == x){
    return x;
  }else {
    return par[x] = find(par[x]);
  }
}

void unite(int x, int y){
  x = find(x);
  y = find(y);
  if(x == y)return;

  if(Rank[x] < Rank[y]){
    par[x] = y;
  }else{
    par[y] = x;
    if(Rank[x] == Rank[y])Rank[x]++;
  }
}

bool same(int x, int y){
  return find(x) == find(y);
}


struct edge { int u, v, cost; };

bool comp(const edge& e1, const edge& e2){
  return e1.cost < e2.cost;
}

vector<edge> es;
int V, E;

int kruskal(){
  sort(es.begin(), es.end(), comp);
  init(V);
  int res = 0;
  for(int i = 0; i < E; i++){
    edge e = es[i];
    if(!same(e.u, e.v)){
      unite(e.u, e.v);
      res += e.cost;
    }
  }
  return res;
}

int main(){
   cin >> V >> E;
   es.resize(E);
   par.resize(V);
   Rank.resize(V);
   for(int i = 0; i < E; i++){
    int s, t, w;
    cin >> s >> t >> w;
    edge e;
    e.u = s; e.v = t; e.cost = w;
    es[i] = e;
   }
   int ans = kruskal();
   cout << ans << endl;
}