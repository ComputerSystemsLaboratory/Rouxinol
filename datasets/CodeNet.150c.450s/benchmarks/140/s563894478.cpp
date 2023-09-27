#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class union_find_tree {
private:
	vector<int>par, rank_;
public:
	union_find_tree(int n) :par(n), rank_(n) {
		for (int i = 0; i < n; i++) {
			par[i] = i;
			rank_[i] = 0;
		}
	}
	int root(int x) {
		if (par[x] == x) {
			return x;
		}
		else {
			return par[x] = root(par[x]);
		}
	}
	void unite(int x, int y) {
		x = root(x);
		y = root(y);
		if (x == y) {
			return;
		}
		if (rank_[x] < rank_[y]) {
			par[x] = y;
		}
		else if (rank_[x] == rank_[y]) {
			par[x] = y;
			rank_[y]++;
		}
		else if (rank_[y] < rank_[x]) {
			par[y] = x;
		}
	}
	bool same(int x, int y) {
		return root(x) == root(y);
	}

};

struct edge {
	int from, to, cost;
	bool operator<(const edge& other) const{
		return cost < other.cost;
	}
};

using edges = vector<edge>;


int kruskal(union_find_tree& uf,edges& es,int V) {

	sort(es.begin(), es.end());
	int E = es.size();
	int res = 0;
	for (int i = 0; i < E; i++) {
		if (!uf.same(es[i].from, es[i].to)) {
			uf.unite(es[i].from, es[i].to);
			res += es[i].cost;
		}
	}
	return res;
}

int main() {
	int V, E;
	cin >> V >> E;
	edges es(E);
	union_find_tree uf(V);
	for (int i =0 ; i < E; i++) {
		cin >> es[i].from >> es[i].to >> es[i].cost;
	}
	cout << kruskal(uf, es, V) << endl;
	return 0;
}






