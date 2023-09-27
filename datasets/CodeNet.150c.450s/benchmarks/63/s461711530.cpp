#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
#include<queue>
#include<stack>
#define INF 9999999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;
typedef pair<int, int>P;
typedef pair<int, P> PP;

int V,E,r;
vector<P> G[105000];
ll d[105000];

void dijkstra(int s)
{
	fill(d, d + V, INF);
	d[s] = 0;
	priority_queue<P,vector<P>,greater<P>>que;
	que.push(P(0, s));

	while (!que.empty()) {
		P p = que.top(); que.pop();
		int v = p.second;
		if (d[v] < p.first)continue;
		for (int i = 0; i < G[v].size(); i++) {
			P e = G[v][i];
			int to = e.first;
			int cost = e.second;
			if (d[to] > d[v] + cost) {
				d[to] = d[v] + cost;
				que.push(P(d[to], to));
			}
		}
	}
}

int main()
{
	cin >> V >> E >> r;
	int s, t, di;
	for (int i = 0; i < E; i++) {
		cin >> s >> t >> di;
		G[s].push_back(P(t, di));
	}
	dijkstra(r);
	for (int i = 0; i < V; i++) {
		if (d[i] == INF)cout << "INF" << endl;
		else cout << d[i] << endl;
	}

	return 0;
}