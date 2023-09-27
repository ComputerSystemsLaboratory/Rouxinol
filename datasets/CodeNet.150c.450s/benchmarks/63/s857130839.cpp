#include <bits/stdc++.h>
using namespace std;

const int inf = 1000000000;

int main() {
	int v, e, r;
	cin >> v >> e >> r;
	vector<vector<pair<int, int>>> graph(v, vector<pair<int, int>>());
	for (int i = 0; i < e; i++) {
		int s, t, d;
		cin >> s >> t >> d;
		graph[s].push_back(make_pair(t, d));
	}
	vector<int> dist(v, inf);
	dist[r] = 0;
	queue<int> q;
	q.push(r);
	while (!q.empty()) {
		int i = q.front();
		q.pop();
		for (auto it = begin(graph[i]); it != end(graph[i]); it++) {
			if (dist[i] + it->second < dist[it->first]) {
				dist[it->first] = dist[i] + it->second;
				q.push(it->first);
			}
		}
	}
	for (auto it = begin(dist); it != end(dist); it++) {
		if (*it == inf) {
			cout << "INF" << endl;
		} else {
			cout << *it << endl;
		}
	}
	return 0;
}