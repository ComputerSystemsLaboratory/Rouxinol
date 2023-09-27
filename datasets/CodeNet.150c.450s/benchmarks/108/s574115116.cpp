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
class DirectedGraph {
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

	DirectedGraph(int n = 0) {
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
	}

	void dfs(int s) {
		vector<bool> visit(V);
		calcDfs(visit, s);
	}

	void calcDfs(vector<bool>& visit, int s) {
		if (visit[s])
			return;

		visit[s] = true;
		for (int i = 0; i < G[s].size(); ++i) {
			calcDfs(G[s][i].to);
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
	DirectedGraph<int> g;
	int n, from, k, to;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> from >> k;
		while (k--) {
			cin >> to;
			g.addEdge(from, to);
		}
	}

	auto v = g.bfs(1);
	for (int i = 1; i <= n; ++i) {
		cout << i << " " << v[i] << endl;
	}

	return 0;
}