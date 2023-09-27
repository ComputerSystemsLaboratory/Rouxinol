#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Union{
	vector<int> par;
	vector<int> size;
	

	Union(int n) : par(n), size(n,1){
	    for(int i=0; i < n; i++){
			size[i] = 1;
			par[i] = i;
		}
	}

	int find(int x){
		if (x == par[x]) return x;
		return par[x] = find(par[x]);  
	}

	void unite(int x, int y){
		x = find(x);
		y = find(y);

		if(x == y) return;

		if(size[x] < size[y]) swap(x, y);
		
		par[y] = x;
		size[x] += size[y];
	}

	bool same(int x, int y){
		return find(x) == find(y);
	}

	int getSize(int x){
		return size[find(x)];
	}
};


struct Edge{
	int a, b, cost;

	bool operator<(const Edge& o) const{
		return cost < o.cost;
	}
};


struct Graph{
	int n;  
	vector<Edge> e;  

	int kruskal(){
		sort(e.begin(), e.end());

		Union u(n);
		int min_cost = 0;

	    for(int i=0; i<e.size(); i++){
			Edge& x = e[i];
			if (u.same(x.a, x.b) == false){
				min_cost += x.cost;
				u.unite(x.a, x.b);
			}
		}

		return min_cost;
	}
};

int main(){
	Graph g;
	Edge e;
	int m;
	cin >> g.n >> m;
  
    for(int i=0; i<m; i++){	
		cin >> e.a >> e.b >> e.cost;
		g.e.push_back(e);
	}
  
	cout << g.kruskal() << endl;
  
	return 0;
}
