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
#define INF (1 << 29)
#define LLINF (1LL << 61)
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
class Graph {
public:
	class Edge {
	public:
		int to;
		T cost;

		Edge(int t, T c) : to(t), cost(c) {}
	};

	vector<vector<Edge>> G;
	int V;

	Graph(int n = 0) {
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
		vector<int> visit(V);
		calcDfs(visit, s);
	}

	void calcDfs(vector<int>& visit, int s) {
		if (visit[s])
			return;

		visit[s] = 1;
		for (int i = 0; i < G[s].size(); ++i) {
			calcDfs(visit, G[s][i].to);
		}
	}

	vector<T> bfs(int s) {
		vector<T> dist(V);
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
				dist[to] = dist[from] + G[from][i].cost;
				que.push(to);
			}
		}

		return dist;
	}

	vector<T> dijkstra(int s) {
		vector<T> dist(V);	
		priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> que;
		
		fill(dist.begin(), dist.end(), INF);
		dist[s] = 0;
		que.push(make_pair(0, s));
		while (!que.empty()) {
			auto f = que.top();
			que.pop();

			T cost = f.first;
			int from = f.second;

			for (int i = 0; i < G[from].size(); ++i) {
				int to = G[from][i].to;
				if (dist[to] > cost + G[from][i].cost) {
					dist[to] = cost + G[from][i].cost;
					que.push(make_pair(dist[to], to));
				}
			}
		}

		return dist;
	}

	T dijkstra(int s, int e) {
		vector<T> dist(V);
		priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> que;

		fill(dist.begin(), dist.end(), INF);
		dist[s] = 0;
		que.push(make_pair(0, s));
		while (!que.empty()) {
			auto f = que.top();
			que.pop();

			T cost = f.first;
			int from = f.second;

			if (from == e) {
				return cost;
			}

			for (int i = 0; i < G[from].size(); ++i) {
				int to = G[from][i].to;
				if (dist[to] > cost + G[from][i].cost) {
					dist[to] = cost + G[from][i].cost;
					que.push(make_pair(dist[to], to));
				}
			}
		}

		return -1;
	}

	vector<vector<T>> warshallFloyd() {
		vector<vector<T>> dist(V, vector<T>(V, INF));
		for (int i = 0; i < V; ++i) {
			dist[i][i] = 0;
			for (int j = 0; j < G[i].size(); ++j) {
				dist[i][G[i][j].to] = G[i][j].cost;
			}
		}

		for (int k = 0; k < V; ++k)
			for (int i = 0; i < V; ++i)
				for (int j = 0; j < V; ++j)
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

		return dist;
	}

	T prim() {
		int s = -1;
		for (int i = 0; i < V; ++i) {
			if (G[i].size() > 0) {
				s = i;
				break;
			}
		}

		T dst = 0;
		vector<int> visit(V);
		priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> que;
		que.push(make_pair(0, s));
		while (!que.empty()) {
			auto from = que.top();
			que.pop();

			if (visit[from.second] != 2) {
				dst += from.first;
				visit[from.second] = 2;
			}

			for (int i = 0; i < G[from.second].size(); ++i) {
				auto tmp = G[from.second][i];
				if (visit[tmp.to] != 2) {
					visit[tmp.to] = 1;
					que.push(make_pair(tmp.cost, tmp.to));
				}
			}
		}

		return dst;
	}
};

int main() {
	int n, f, t, c;
	while (cin >> n && n > 0) {
		Graph<int> g;
		for (int i = 0; i < n; ++i) {
			cin >> f >> t >> c;
			g.addEdge(f, t, c);
			g.addEdge(t, f, c);
		}

		auto v = g.warshallFloyd();
		int ans = INF, s = -1, sum;
		for (int i = 0; i < v.size(); ++i) {
			sum = accumulate(all(v[i]), 0);
			if (ans > sum) {
				ans = sum;
				s = i;
			}
		}
		cout << s << " " << ans << endl;
	}

	return 0;
}