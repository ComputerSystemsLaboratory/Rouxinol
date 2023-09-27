#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct edge{ int u,v,cost; };

vector<edge> edges;

int uf_par[10000];
int uf_rank[10000];

void uf_init(int uf_n){
	for(int i = 0;i < uf_n;i++){
		uf_par[i] = i;
		uf_rank[i] = 0;
	}
}

int uf_find(int uf_x){
	if(uf_par[uf_x] == uf_x) return uf_x;
	else return uf_par[uf_x] = uf_find(uf_par[uf_x]);
}

void uf_unite(int uf_x,int uf_y){
	uf_x = uf_find(uf_x);
	uf_y = uf_find(uf_y);
	if(uf_x == uf_y) return;
	if(uf_rank[uf_x] < uf_rank[uf_y]){
		uf_par[uf_x] = uf_y;
	}else{
		uf_par[uf_y] = uf_x;
		if(uf_rank[uf_x] == uf_rank[uf_y]) uf_rank[uf_x]++;
	}
}

bool uf_same(int uf_x,int uf_y){
	return uf_find(uf_x) == uf_find(uf_y);
}

bool krus_comp(const edge& e1, const edge& e2){
	return e1.cost < e2.cost;
}

int kruskal(int V){
	sort(edges.begin(),edges.end(),krus_comp);
	uf_init(V);
	int krus_res = 0;
	for(int i = 0;i < edges.size();i++){
		edge krus_e = edges[i];
		if(!uf_same(krus_e.u,krus_e.v)){
			uf_unite(krus_e.u,krus_e.v);
			krus_res += krus_e.cost;
		}
	}
	return krus_res;
}

int main(){
	int V,E;
	cin >> V >> E;
	for(int i = 0;i < E;i++){
		int a,b,c;
		cin >> a >> b >> c;
		edges.push_back({a,b,c});
	}
	cout << kruskal(V) << endl;
	return 0;
}