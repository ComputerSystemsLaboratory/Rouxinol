#include <bits/stdc++.h>
using namespace std;

template <typename Cost>
class BellmanFord {
private:
	struct Edge {
		int src, dst;
		Cost cost;
	};
	
public:
	BellmanFord(int n = 0) : n(n), INF(numeric_limits<Cost>::max()){}
	
	void addEdge(int src, int dst, Cost cost){
		g.push_back({src, dst, cost});
	}
	
	void solve(int s){
		d.assign(n, INF);
		p.assign(n, -1);
		nega = false;
		
		auto update = [&](int src, int dst, Cost sum){
			if (d[dst] > sum){
				d[dst] = sum;
				p[dst] = src;
				return true;
			}
			return false;
		};
		
		d[s] = 0;
		for (int k = 0; k < n; k++){
			for (Edge &e : g){
				if (!reach(e.src)) continue;
				if (update(e.src, e.dst, d[e.src] + e.cost) && k == n - 1){
					d[e.dst] = -INF;
					nega = true;
				}
			}
		}
	}
	
	bool negativeCycle(){
		return nega;
	}
	
	bool reach(int v){
		return d[v] != INF;
	}
	
	Cost dist(int v){
		return d[v];
	}
	
	vector<int> path(int v){
		vector<int> res;
		for (int u = v; ~p[u]; u = p[u]){
			res.push_back(u);
		}
		reverse(begin(res), end(res));
		return res;
	}
	
private:
	const Cost INF;
	int n;
	vector<Edge> g;
	vector<Cost> d;
	vector<int> p;
	bool nega;
};


int main()
{
	int n, m, r;
	scanf("%d %d %d", &n, &m, &r);
	
	BellmanFord<int> solver(n);
	
	for (int i = 0; i < m; i++){
		int s, t, d;
		scanf("%d %d %d", &s, &t, &d);
		
		solver.addEdge(s, t, d);
	}
	
	solver.solve(r);
	
	if (solver.negativeCycle()){
		puts("NEGATIVE CYCLE");
	}
	else {
		for (int i = 0; i < n; i++){
			if (solver.reach(i)) printf("%d\n", solver.dist(i));
			else puts("INF");
		}
	}
}