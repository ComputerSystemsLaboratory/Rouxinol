#include <iostream>
#include <vector>
#include <climits>

using edge_to = std::pair<long long, long long>;	// {weight, to}
using edge = std::vector<long long>;				// {weight, from, to}

// true : detected negative cycle
bool warshall_floyd(
	long long V,
	long long E,
	std::vector<edge>& edges,					// set of DIRECTED edges
	std::vector<std::vector<long long>>& dist	// should be sized V * V, filled with infinity
) {
	for (long long i = 0; i < V; i++) dist[i][i] = 0;
	for (auto i : edges) dist[i[1]][i[2]] = i[0];
	for (long long k = 0; k < V; k++) {
		for (long long i = 0; i < V; i++) {
			if (dist[i][k] == LLONG_MAX) continue;
			for (long long j = 0; j < V; j++) {
				if (dist[k][j] == LLONG_MAX) continue;
				dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	for (long long k = 0; k < V; k++) {
		for (long long i = 0; i < V; i++) {
			if (dist[i][k] == LLONG_MAX) continue;
			for (long long j = 0; j < V; j++) {
				if (dist[k][j] == LLONG_MAX) continue;
				if (dist[i][j] > dist[i][k] + dist[k][j]) {
					return true;
				}
			}
		}
	}
	return false;
}

int main() {
	long long V, E;
	std::cin >> V >> E;
	std::vector<edge> edges(0);
	for (long long i = 0; i < E; i++) {
		long long s, t, d;
		std::cin >> s >> t >> d;
		edges.push_back({d, s, t});
	}
	std::vector<std::vector<long long>> dist(V, std::vector<long long>(V, LLONG_MAX));
	if (warshall_floyd(V, E, edges, dist)) {
		std::cout << "NEGATIVE CYCLE\n";
	} else {
		for (auto i : dist) {
			for (long long j = 0; j < V - 1; j++) {
				if (i[j] == LLONG_MAX) std::cout << "INF ";
				else std::cout << i[j] << ' ';
			}
			if (i.back() == LLONG_MAX) std::cout << "INF\n";
			else std::cout << i.back() << '\n';
		}
	}
}
