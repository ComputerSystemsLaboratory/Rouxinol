#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <numeric>

using namespace std;

// 隣接リストを用いたグラフ構造
template <typename Vertex, typename Edge>
struct Graph
{
	// 頂点
	vector<Vertex> vertices;
	// 第i頂点を始点とする有向辺の終点
	vector<unordered_map<int, Edge>> edges;

	// n個の頂点を事前に生成する
	void resize (size_t n)
	{
		vertices.resize(n);
		edges.resize(n);
	}

	// 頂点n個分のメモリ領域を事前に確保する
	void reserve (size_t n)
	{
		vertices.reserve(n);
		edges.reserve(n);
	}

	// 位数（頂点数）
	size_t order ()
	{
		return vertices.size();
	}

	// サイズ（辺の数）
	size_t size ()
	{
		return accumulate(edges.begin(), edges.end(), static_cast<size_t>(0), [](size_t sum, unordered_map<int, Edge> &edge){ return sum + edge.size(); });
	}

	// 頂点を追加する
	void addVertex (const Vertex &vertex)
	{
		vertices.push_back(vertex);
		edges.emplace_back();
	}

	// 有向辺を追加する
	void addEdge (int from, int to, const Edge &edge)
	{
		edges[from][to] = edge;
	}

	// 有向辺を削除する
	void removeEdge (int from, int to)
	{
		edges[from].erase(to);
	}
};

// 使用例（Dijkstra法）
struct Dijkstra : public Graph<nullptr_t, int>
{
	vector<int> weight;

	void dijkstra (int from)
	{
		weight.resize(order());
		fill(weight.begin(), weight.end(), numeric_limits<int>::max());

		auto compare = [this] (int l, int r) { return weight[l] > weight[r]; };
		priority_queue<int, vector<int>, decltype(compare)> fixed(compare);

		weight[from] = 0;
		fixed.push(from);

		while (!fixed.empty())
		{
			int vertex = fixed.top();
			fixed.pop();

			// to = { first: dest_index, second: edge_weight }
			for (auto to : edges[vertex])
			{
				if (weight[to.first] <= weight[vertex] + to.second) continue;

				weight[to.first] = weight[vertex] + to.second;
				fixed.push(to.first);
			}
		}
	}
};

int main ()
{
	int n; cin >> n;

	Dijkstra dijkstra;
	dijkstra.resize(n);

	for (int i=0; i<n; ++i)
	{
		int u, k; cin >> u >> k;
		for (int j=0; j<k; ++j)
		{
			int v, c; cin >> v >> c;

			dijkstra.addEdge(u, v, c);
		}
	}

	dijkstra.dijkstra(0);

	for (int i=0; i<n; ++i)
	{
		cout << i << " " << dijkstra.weight[i] << endl;
	}

	return 0;
}

