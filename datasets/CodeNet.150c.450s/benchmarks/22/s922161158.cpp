#include <iostream>
#include <vector>
#include <climits>
using edge_to = std::pair<long long, long long>;	// {weight, to}
using edge = std::vector<long long>;				// {weight, from, to}

// return true : detected negative cycle
bool bellman_ford(
	long long V,
	long long E,
	long long r,
	std::vector<edge>& edges,		// set of DIRECTED edges
	std::vector<long long>& dist	// should be sized V, filled with infinity
) {
	dist[r] = 0;
	for (long long i = 0; i < V - 1; i++) {
		for (auto j : edges) {
			if (dist[j[1]] == LLONG_MAX) continue;
			dist[j[2]] = std::min(dist[j[2]], dist[j[1]] + j[0]);
		}
	}
	for (auto i : edges) {
		if (dist[i[1]] == LLONG_MAX) continue;
		if (dist[i[2]] > dist[i[1]] + i[0]) return true;
	}
	return false;
}

int main() {
	long long V, E, r;
	std::cin >> V >> E >> r;
	std::vector<edge> edges(0);
	for (long long i = 0; i < E; i++) {
		long long s, t, d;
		std::cin >> s >> t >> d;
		edges.push_back({d, s, t});
	}
	std::vector<long long> dist(V, LLONG_MAX);
	if (bellman_ford(V, E, r, edges, dist)) {
		std::cout << "NEGATIVE CYCLE" << std::endl;
	} else {
		for (auto i : dist) {
			if (i == LLONG_MAX) std::cout << "INF\n";
			else std::cout << i << '\n';
		}
	}
}
