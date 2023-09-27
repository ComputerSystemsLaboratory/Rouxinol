#include <bits/stdc++.h>
using namespace std;
#define int long long

struct UnionFind{
	vector<int> rnk,par,num;
	UnionFind(int N) : rnk(N),par(N),num(N){
		init();
	}
	void init(){
		for(int i = 0;i < rnk.size();i++){
			rnk[i] = 0;
			par[i] = i;
			num[i] = 1;
		}
	}
	int find(int x){
		if(par[x] == x) return x;
		return par[x] = find(par[x]);
	}
	void unite(int x,int y){
		x = find(x);
		y = find(y);
		if(x == y) return;
		if(rnk[x] < rnk[y]){
			par[x] = y;
			num[y] += num[x];
		}
		else{
			par[y] = x;
			num[x] += num[y];
			if(rnk[x] == rnk[y]) rnk[x]++;
		}
	}
	bool same(int x,int y){
		return (find(x) == find(y));
	}
	int size(int x){
		return num[find(x)];
	}
};

struct edge{int u, v, cost;};

bool comp(const edge& e1, const edge& e2){
  return e1.cost < e2.cost;
}

signed main(){
  int V, E; cin >> V >> E;
  UnionFind tree(V);
  vector<edge> es;
  for(int i = 0; i < E; i++){
    int s, t, w; cin >> s >> t >> w;
    edge e = {s, t, w};
    es.push_back(e);
  }
  int ans = 0;
  sort(es.begin(), es.end(), comp);
  for(int i = 0; i < E; i++){
    edge e = es[i];
    if(!tree.same(e.u, e.v)){
      ans += e.cost;
      tree.unite(e.u, e.v);
    }
  }
  cout << ans << endl;
}
