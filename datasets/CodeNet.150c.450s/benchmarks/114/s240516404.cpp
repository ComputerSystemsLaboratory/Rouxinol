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
	int n, c;
	Graph<int> g;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> c;
			if (c == -1)
				continue;
			g.addEdge(i, j, c);
		}
	}

	cout << g.prim() << endl;

	return 0;
}