#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using edge_to = std::pair<long long, long long>; // {weight, to}
using edge = std::vector<long long>; // {weight, from, to}

std::vector<edge> edges(0); // 選んだ順に辺を格納　逆順に辿って経路復元
std::vector<long long> dijkstra(
	long long V,
	long long E,
	long long r,
	std::vector<std::vector<edge_to>>& adj_list
) {
	std::vector<long long> ret(V, LLONG_MAX);
	ret[r] = 0;
	using P = std::pair<long long, edge>;
	std::priority_queue<P, std::vector<P>, std::greater<P>> pq;
	for (auto i : adj_list[r]) {
		pq.push({i.first, {i.first, r, i.second}});
	}
	while (pq.size()) {
		while (pq.size() && ret[pq.top().second[2]] < LLONG_MAX) pq.pop();
		if (pq.empty()) break;
		long long w = pq.top().first; edge e = pq.top().second;
		pq.pop();
		ret[e[2]] = w;
		edges.push_back(e);
		for (auto i : adj_list[e[2]]) {
			if (ret[i.second] < LLONG_MAX) continue;
			long long next_w = ret[e[2]] + i.first;
			edge next_e = {i.first, e[2], i.second};
			pq.push({next_w, next_e});
		}
	}
	return ret;
}

int main() {
	long long V, E, r;
	std::cin >> V >> E >> r;
	std::vector<std::vector<edge_to>> adj_list(V);
	for (long long i = 0; i < E; i++) {
		long long s, t, d;
		std::cin >> s >> t >> d;
		adj_list[s].push_back({d, t});
	}
	std::vector<long long> dist = dijkstra(V, E, r, adj_list);
	for (auto i : dist) {
		if (i == LLONG_MAX) std::cout << "INF\n";
		else std::cout << i << '\n';
	}
}
