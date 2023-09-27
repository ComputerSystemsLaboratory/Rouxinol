#include "bits/stdc++.h"
#include <sys/timeb.h>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define replrev(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define reprev(i,n) replrev(i,0,n)
#define repi(itr,ds) for(auto itr = ds.begin(); itr != ds.end(); ++itr)
#define mp make_pair
#define INF 2000000000
#define MOD 1000000007
#define PI 3.1415926536
#define RMAX 4294967295
typedef long long ll;
typedef pair<int, int> P;


void Dijkstra(vector<vector<P> > graph, int start, vector<int> &cost, int V) {
	vector<int> prev(V);
	vector<bool> visited(V);
	priority_queue<P, vector<P>, greater<P> > Q;

	fill(cost.begin(), cost.end(), INF);
	cost[start] = 0;

	Q.push(mp(0, start));	// (cost, index)

	while (!Q.empty()) {
		P pos = Q.top();
		Q.pop();
		rep(i, graph[pos.second].size()) {
			if (cost[graph[pos.second][i].first] > cost[pos.second] + graph[pos.second][i].second) {
				cost[graph[pos.second][i].first] = cost[pos.second] + graph[pos.second][i].second;
				Q.push(mp(cost[graph[pos.second][i].first], graph[pos.second][i].first));
			}
		}
	}
}

int main() {
	int V, E, r;
	cin >> V >> E >> r;
	vector<vector<P> >g(V);
	vector<int> c(V);

	rep(i, E) {
		int s, t, d;
		cin >> s >> t >> d;
		g[s].push_back(mp(t, d));
	}

	Dijkstra(g, r, c, V);

	rep(i, V) {
		if (c[i] == INF) {
			cout << "INF" << endl;
		}
		else {
			cout << c[i] << endl;
		}
	}

	return 0;
}