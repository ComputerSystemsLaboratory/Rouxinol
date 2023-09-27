#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;

vector<pair<int, int>> adj[MAX];
// |V|, |E|, starting node
int n, m, s;

bool visited[MAX];
int dist[MAX];

int main() {
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
	int src, dest, dist;
	cin >> src >> dest >> dist;
	adj[src].push_back(make_pair(dest, dist));
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>,
		   greater<pair<int, int>>>
	pq;
    pq.push(make_pair(0, s));
    while (!pq.empty()) {
	int d = pq.top().first, node = pq.top().second;
	pq.pop();

	if (visited[node]) continue;
	visited[node] = true;
	dist[node] = d;

	for (auto v : adj[node]) {
	    pq.push(make_pair(d + v.second, v.first));
	}
    }

    for (int i = 0; i < n; i++) {
	if (visited[i])
	    cout << dist[i] << endl;
	else
	    cout << "INF" << endl;
    }
    return 0;
}

