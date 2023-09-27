#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
	int V, E, r;
	cin >> V >> E >> r;
	vector<vector<pair<int, int>>> G(V, vector<pair<int, int>>());
	for (int i=0;i<E;i++) {
		int s, t, d;
		cin >> s >> t >> d;
		pair<int, int> p = make_pair(t, d);
		G[s].push_back(p);
	}

	vector<int> cost(V, -1);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pair<int, int> first = make_pair(0, r); // first: cost, second: vertex
	pq.push(first);
	while (!pq.empty()) {
		pair<int, int> rem = pq.top();
		pq.pop();
		if (cost[rem.second] != -1) continue;
		cost[rem.second] = rem.first;
		for (pair<int, int> p : G[rem.second]) {
			if (cost[p.first] == -1) {
				pair<int, int> tmp = make_pair(rem.first+p.second, p.first);
				pq.push(tmp);
			}
		}
	}

	for (int i=0;i<V;i++) {
		if (cost[i] == -1) {
			cout << "INF" << endl;
		} else {
			cout << cost[i] << endl;
		}
	}
}
