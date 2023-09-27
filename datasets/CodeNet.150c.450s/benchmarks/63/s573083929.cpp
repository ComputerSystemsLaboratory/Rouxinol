#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <queue>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

struct edge {
	int from,to;
	int cost;

	edge(int t,int c) : to(t),cost(c) {}
	edge(int f,int t,int c) : from(f),to(t),cost(c) {}

	bool operator<(const edge &e) const {
		return cost < e.cost;
	}
};

vector<edge> G[100005];
int d[100005];

void dijkstra(int s,int n) {
	priority_queue<P,vector<P>,greater<P> > que;
	fill(d,d+n,INF);

	d[s] = 0;
	que.push(P(0,s));

	while(que.size()) {
		P p = que.top();
		que.pop();

		int v = p.second;
		if(d[v] < p.first) continue;

		rep(i,G[v].size()) {
			edge e = G[v][i];
			if(d[e.to] > d[v] + e.cost) {
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to],e.to));
			}
		}
	}
}

int main() {
	int n, m, r;
	cin >> n >> m >> r;

	rep(i, m) {
		int s, t, c;
		cin >> s >> t >> c;
		G[s].push_back(edge(t, c));
	}

	dijkstra(r, n);

	rep(i, n) {
		if(d[i] == INF) cout << "INF" << endl;
		else cout << d[i] << endl;
	}

	return 0;
}