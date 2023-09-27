#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class UnionFind {
private:
	struct SubSet {
		SubSet() : parent(0), rank(0) {
		}
		int parent;
		int rank;
	};
	vector<SubSet> vSubSet;
public:
	UnionFind(int n): vSubSet(n) {
		for (int i = 0; i < n; i++) {
			vSubSet[i].parent = i;
		}
	}

	int root(int i) {
		while (vSubSet[i].parent != i) {
			vSubSet[i].parent = vSubSet[vSubSet[i].parent].parent;
			i = vSubSet[i].parent;
		}

		return i;
	}

	void connect(int i, int j) {
		int rooti = root(i);
		int rootj = root(j);

		if (vSubSet[rooti].rank < vSubSet[rootj].rank) {	
			vSubSet[rooti].parent = rootj;
		}
		else if (vSubSet[rootj].rank < vSubSet[rooti].rank) {
			vSubSet[rootj].parent = rooti;
		}
		else {
			vSubSet[rooti].parent= rootj;
			vSubSet[rooti].rank++;
		}
	}

	bool find(int i, int j) {
		return root(i) == root(j);
	}
};

class Graph {
private:
	struct Edge {
		Edge(): src(0), dst(0), weight(0) {
		}
		Edge(int src, int dst, int weight): src(src), dst(dst), weight(weight) {
		}
		int src;
		int dst;
		int weight;
	};
	struct EdgeComp
	{
		bool operator() (const Edge &e1, const Edge &e2) {
			return e1.weight < e2.weight;
		}
	} edgeComp;
	int V;
	int E;
	vector<Edge> vEdge;
public:
	Graph(int v, int e): V(v), E(e), vEdge() {
	}

	void addEdge(int src, int dst, int weight) {
		Edge e(src, dst, weight);
		vEdge.push_back(e);
	}

	int kruskal() {
		vector<Edge> vResult;
		UnionFind uf(V+1);
		
		sort(vEdge.begin(), vEdge.end(), edgeComp);

		int i = 0;
		int result = 0;
		while (vResult.size() < V - 1) {
			const Edge &e = vEdge[i];
			if (!uf.find(e.src, e.dst)) {
				vResult.push_back(e);
				uf.connect(e.src, e.dst);
				result += e.weight;
			}
			i++;
		}

		return result;
	}
};

int main() {
	int V, E;
	cin >> V >> E;
	Graph g(V,E);

	for(int i = 0; i < E; i++) {
		int src, dst, weight;
		cin >> src >> dst >> weight;
		g.addEdge(src ,dst, weight);
	}

	cout << g.kruskal() << endl;

	return 0;
}