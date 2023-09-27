#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define ll long long
#define ull unsigned long long
#define INF (1 << 30)
#define LLINF (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define eps 1e-9
#define P pair<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pul pair<ull, ull>
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);--i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define RREP(i,n) for (int i=(n)-1;i>=0;--i)

void YES() { cout << "YES" << endl; }
void NO() { cout << "NO" << endl; }
void Yes() { cout << "Yes" << endl; }
void No() { cout << "No" << endl; }
void yes() { cout << "yes" << endl; }
void no() { cout << "no" << endl; }

template<class T>
class UnDirectedGraph {
public:
	class Edge {
	public:
		int to;
		T cost;

		Edge(int t, T c) : to(t), cost(c) {}

		bool operator<(const Edge& right) const {
			return cost == right.cost ? to < right.to : cost < right.cost;
		}
	};

	vector<vector<Edge>> G;
	int V;

	UnDirectedGraph(int n = 0) {
		resize(n);
	}

	void resize(int n) {
		V = n;
		G.resize(n);
	}

	void addEdge(int from, int to, T cost = 0) {
		int v = max(from, to);
		if (v >= V)
			resize(v + 1);
		G[from].push_back(Edge(to, cost));
		G[to].push_back(Edge(from, cost));
	}

	vector<int> visit;
	int col = 0;
	void dfs(int s) {
		//vector<int> visit(V);
		visit.resize(V);
		col++;
		calcDfs(visit, s);
	}

	void calcDfs(vector<int>& visit, int s) {
		if (visit[s])
			return;

		//visit[s] = 1;
		visit[s] = col;
		for (int i = 0; i < G[s].size(); ++i) {
			calcDfs(visit, G[s][i].to);
		}
	}

	vector<int> bfs(int s) {
		vector<int> dist(V);
		queue<int> que;

		fill(dist.begin(), dist.end(), -1);
		dist[s] = 0;
		que.push(s);
		while (!que.empty()) {
			int from = que.front();
			que.pop();
			for (int i = 0; i < G[from].size(); ++i) {
				int to = G[from][i].to;
				if (dist[to] != -1)
					continue;
				dist[to] = dist[from] + 1;
				que.push(to);
			}
		}

		return dist;
	}
};

int main() {
	int n, m, from, to;
	cin >> n >> m;
	UnDirectedGraph<int> g(n);
	while (m--) {
		cin >> from >> to;
		g.addEdge(from, to);
	}
	
	for (int i = 0; i < n; ++i)
		g.dfs(i);

	int q;
	cin >> q;
	while (q--) {
		cin >> from >> to;
		if (g.visit[from] == g.visit[to])
			yes();
		else
			no();
	}

	return 0;
}