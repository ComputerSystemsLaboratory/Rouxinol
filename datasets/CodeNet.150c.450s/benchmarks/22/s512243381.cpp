#include<iostream>
#include<queue>
#include<vector>
#include<functional>
using namespace std;
typedef long long ll;
ll INF = 1e15;
struct Edge {
	ll from;
	ll to;
	ll cost;
};
using P = pair<ll, ll>;
vector<Edge>G[100005];
ll d[100005];
Edge es[200005];

int main() {
	int r;
	int V;
	int E;
	cin >> V >> E >> r;
	for (int i = 0; i < E; i++) {
		d[i] = INF;
	}
	for (int i = 0; i < E; i++) {
		cin >> es[i].from >> es[i].to >> es[i].cost;
	}
	d[r] = 0;
	bool update = true;
	int count = 0;
	while (update) {
		update = false;
		for (int i = 0; i < E; i++) {
			Edge e = es[i];
			if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		
		if (count == V) {
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
		if (!update)break;
		count++;
	}
	for (int i = 0; i < V; i++) {
		if (d[i] == INF) {
			cout << "INF" << endl;
		}
		else {
			cout << d[i] << endl;
		}
	}
	return 0;
}
