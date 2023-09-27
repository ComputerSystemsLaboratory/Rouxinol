#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using edge_to = std::pair<long long, long long>; // {weight, to}
using edge = std::vector<long long>; // {weight, from, to}

// return set of edges
std::vector<edge> prim(
	long long V,
	long long E,
	std::vector<std::vector<edge_to>>& adj_list
) {
	std::vector<edge> ret(0);
	std::priority_queue<edge, std::vector<edge>, std::greater<edge>> pq;
	for (auto i : adj_list[0]) {
		pq.push({i.first, 0, i.second});
	}
	std::vector<bool> connected(V, false);
	connected[0] = true;
	while (--V) {
		while (connected[pq.top()[2]]) pq.pop();
		edge e = pq.top(); pq.pop();
		ret.push_back(e);
		connected[e[2]] = true;
		for (auto i : adj_list[e[2]]) {
			if (connected[i.second]) continue;
			pq.push({i.first, e[2], i.second});
		}
	}
	return ret;
}

int main() {
	long long V, E;
	std::cin >> V >> E;
	std::vector<std::vector<edge_to>> adj_list(V);
	for (long long i = 0; i < E; i++) {
		long long s, t, w;
		std::cin >> s >> t >> w;
		adj_list[s].push_back({w, t});
		adj_list[t].push_back({w, s});
	}
	std::vector<edge> edges = prim(V, E, adj_list);
	long long ans = 0;
	for (auto i : edges) ans += i[0];
	std::cout << ans << std::endl;
}
