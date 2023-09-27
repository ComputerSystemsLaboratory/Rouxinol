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

void YES() { cout << "YES\n"; }
void NO() { cout << "NO\n"; }
void Yes() { cout << "Yes\n"; }
void No() { cout << "No\n"; }
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
	};

	vector<vector<Edge>> G;
	vector<int> visit;
	vector<pii> stamp{ 0 };
	int V;

	DirectedGraph(int n = 0) {
		resize(n);
	}

	void resize(int n) {
		V = n;
		G.resize(n);
		visit.resize(n);
		stamp.resize(n);
	}

	void addEdge(int from, int to, T cost = 0) {
		int v = max(from, to);
		if (v >= V)
			resize(v + 1);
		G[from].push_back(Edge(to, cost));
	}

	int t = 1;
	void dfs(int s) {
		if (stamp[s].first == 0)
			stamp[s].first = t++;
		else
			return;

		for (int i = 0; i < G[s].size(); ++i) {
			dfs(G[s][i].to);
		}
		stamp[s].second = t++;
	}

	int bfs() {

	}
};

int main() {
	DirectedGraph<int> g;
	int n, id, k, to;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> id >> k;
		while (k--) {
			cin >> to;
			g.addEdge(id, to);
		}
	}

	for (int i = 1; i <= n; ++i) {
		g.dfs(i);
	}
	for (int i = 1; i <= n; ++i) {
		cout << i << " " << g.stamp[i].first << " " << g.stamp[i].second << endl;
	}

	return 0;
}