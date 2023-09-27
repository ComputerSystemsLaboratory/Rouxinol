#include <bits/stdc++.h>
#define INF 1000000000
#define MAX_V 10000
#define MAX_E 100000
using namespace std;
typedef pair<int, int> P;
struct edge { int u, v, cost; };

bool comp(const edge& e1, const edge& e2){
	return e1.cost < e2.cost;
}

int V, E;
edge es[MAX_E];

class UnionFind {
	vector<int> data;
	int root(int a) {
		return data[a] < 0 ? a : data[a] = root(data[a]);
	}
public:
	UnionFind(int n) : data(n, -1) {}
	bool Find(int a, int b) {
		return root(a) == root(b);
	}
	void Union(int a, int b) {
		int ra = root(a), rb = root(b);
		if (ra == rb) return;
		if (data[ra] < data[rb]) {
			data[ra] += data[rb];
			data[rb] = a;
		}
		else {
			data[rb] += data[ra];
			data[ra] = b;
		}
	}
};

int Kruskal() {
	int res = 0;
	UnionFind uf(V);
	sort(es, es + E, comp);
	for (int i = 0; i < E; i++) {
		edge e = es[i];
		if (!uf.Find(e.u, e.v)) {
			uf.Union(e.u, e.v);
			res += e.cost;
		}
	}
	return res;
}

int main()
{
	cin >> V >> E;
	for (int i = 0; i < E; i++) {
		cin >> es[i].u >> es[i].v >> es[i].cost;
	}
	cout << Kruskal() << endl;
	return 0;
}