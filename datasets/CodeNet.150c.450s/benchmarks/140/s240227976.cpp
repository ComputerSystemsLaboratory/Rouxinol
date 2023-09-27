#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef int64_t Int;
using namespace std;

// Union-Find
vector<int> par(100010); //親の番号

// 初期化
void init(int n){
  for(int i=0; i<n; i++) par[i] = i;
}

// 頂点xに対応する木の根を見つける
int root(int x){
  if (par[x] == x) return x;
  else return par[x] = root(par[x]);
}

// 頂点xの木と頂点yの木を統合
void unite(int x, int y){
  x = root(x); y = root(y);
  if (x != y) par[x] = y;
}

bool same(int x, int y){
  return (root(x) == root(y));
}

struct edge {int u, v, cost;};

bool comp(edge e1, edge e2){
    return e1.cost < e2.cost;
}

int kruskal(vector<edge> G, int V){
    sort(G.begin(), G.end(), comp);

    init(V);

    int res = 0;
    rep(i,G.size()){
        edge e = G[i]; 
        if(!same(e.u, e.v)){
            unite(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}

int main(){
    int V, E; cin >> V >> E;

    vector<edge> G;
    rep(i, E){
        int s, t, w; cin >> s >> t >> w;
        edge e = {s,t,w};
        G.push_back(e);
    }

    int ans = kruskal(G, V);
    
    cout << ans << endl;
}
