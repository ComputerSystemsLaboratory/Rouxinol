#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<stack>
#include<numeric>
using namespace std;
#define INF (1 << 30) - 1
#define LINF 1LL << 60
const int MOD = 1000000007;
using ll = long long;
using P = pair<int, int>;

struct UnionFind{
	vector<int> p;
	UnionFind(int n){
		p.resize(n, -1);
	}

	int find(int x){
		if(p[x] == -1)return x;
		else return p[x] = find(p[x]);
	}

	void unite(int x, int y){
		x = find(x);
		y = find(y);
		if(x == y)return;
		p[x] = y;
	}
};

struct Edge{
	int from, to, cost;
	Edge(int from, int to, int cost) : from(from), to(to), cost(cost){}

	bool operator<(const Edge& e) const {
		return cost < e.cost;
	}
};

struct Graph{
	int n;
	vector<Edge> es;

	Graph(int n) : n(n){}

	ll kruskal(){
		sort(es.begin(), es.end()); 

		UnionFind uf(n);
		ll min_cost = 0;
		for(auto e : es){
			if(uf.find(e.from) == uf.find(e.to))continue;
			min_cost += e.cost;
			uf.unite(e.from, e.to);
		}
		return min_cost;
	}

	void addEdge(int a, int b, int c){
		es.push_back(Edge(a, b, c));
	}
};

int main(){
  int n, m;
  cin >> n >> m;
  Graph g(n);
  for(int i = 0; i < m; ++i){
  	int s, t, w;
  	cin >> s >> t >> w;
  	g.addEdge(s, t, w);
  }

  cout << g.kruskal() << endl;
  return 0;
}

