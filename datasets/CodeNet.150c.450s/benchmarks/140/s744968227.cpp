#include <iostream>
#include <algorithm>

const int N = 10001, E = 100001;

struct Edge{
	int u, v, cost;
	bool operator<(const Edge& e) const {
		return cost < e.cost;
	}
};

int rank[N], par[N];
Edge edge[E];
int n, e;

void init(int n){
	for(int i = 0; i < n; ++i){
		par[i] = i;
		rank[i] = 0;
	}
}

int find(int x){
	if(par[x] == x)return x;
	else return par[x] = find(par[x]);
}

void unite(int x, int y){
	x = find(x);
	y = find(y);
	if(x == y) return;
	
	if(rank[x] < rank[y]){
		par[x] = y;
	}else{
		par[y] = x;
		if(rank[x] == rank[y])++rank[x];
	}
}

bool same(int x, int y){
	return find(x) == find(y);
}

long long kruskal(){
	std::sort(edge, edge + e);
	init(n);
	long long res = 0;
	for(int i = 0; i < e; ++i){
		if(!same(edge[i].u, edge[i].v)){
			unite(edge[i].u, edge[i].v);
			res += edge[i].cost;
		}
	}
	return res;
}
	
int main(){
	std::cin >> n >> e;
	
	for(int i = 0; i < e; ++i){
		int a, b, c;
		std::cin >> a >> b >> c;
		edge[i] = {a, b, c};
	}
	
	std::cout << kruskal() << std::endl;

	return 0;
}