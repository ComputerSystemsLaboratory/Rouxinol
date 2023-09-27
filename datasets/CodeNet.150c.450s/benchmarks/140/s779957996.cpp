#include <algorithm>
#include <iostream>
#include <vector>

struct Edge {
	int start;
	int target;
	int weight;
};

class UnionFind {
	std::vector<int> m_nodes;

public:
	UnionFind(size_t size) : m_nodes(size) {
		for (size_t i = 0; i < size; i++)
			m_nodes[i] = i;
	}

	int find(int index) {
		int ret = m_nodes[index];
		if (ret == index) return ret;

		ret = find(ret);
		m_nodes[index] = ret;
		return ret;
	}

	void merge(int x, int y) {
		x = find(x);
		y = find(y);
		m_nodes[x] = y;
	}
};

int main()
{
	int v, e;
	std::cin >> v >> e;

	std::vector<Edge> edges;
	edges.reserve(e);

	for (int i = 0; i < e; i++) {
		Edge edge;
		std::cin >> edge.start >> edge.target >> edge.weight;
		edges.push_back(edge);
	}

	std::sort(edges.begin(), edges.end(), [](Edge& x, Edge& y) { return x.weight < y.weight; });

	UnionFind uf(v);
	uint_least64_t weight = 0;

	for (Edge& edge : edges) {
		int s = uf.find(edge.start);
		int t = uf.find(edge.target);

		if (s != t) {
			uf.merge(s, t);
			weight += edge.weight;
		}
	}

	std::cout << weight << std::endl;

	return 0;
}