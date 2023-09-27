#include<bits/stdc++.h>
using namespace std;

struct Edge{
	int s,g,d;
	Edge(int a, int b, int c) : s(a), g(b), d(c) {}
	
	bool operator<(const Edge &b){
		if(d!=b.d) return d<b.d;
		if(s!=b.s) return s<b.s;
		return g < b.g;
	}
};

struct Unionfind {
	vector< int > par;
	Unionfind(int N) : par(N,-1){
	}
	bool unite(int x, int y) {
		x = root(x), y = root(y);
		if(x == y) return 0;
		if(par[x] > par[y]) swap(x, y);
		par[x] += par[y];
		par[y] = x;
		return 1;
	}
	int root(int k) {
		if(par[k] < 0) return (k);
		return (par[k] = root(par[k]));
	}
	bool same(int x, int y){
		x = root(x);
		y = root(y);
		return x==y;
	}
	int size(int k) {
		return (-par[root(k)]);
	}
};

int main() {
	
	int n,e;
	cin >> n >> e;
	vector<Edge> g;
	for(int i=0; i<e; i++){
		int s, t, w;
		cin >> s >> t >> w;
		g.push_back({s,t,w});
	}
	sort(g.begin(),g.end());
	int ans{};
	Unionfind uf(n);
	for(auto i:g){
		if(!uf.same(i.s,i.g)){
			uf.unite(i.s,i.g);
			ans += i.d;
		}
	}
	cout << ans << endl;
	
}
