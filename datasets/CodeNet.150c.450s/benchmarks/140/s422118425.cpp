#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

#define MAX_V 10000
#define MAX_E 100000
#define INF INT_MAX / 2 - 1

typedef long long ll;

struct edge { int u, v, cost; };

bool comp(const edge& e1, const edge& e2) {
	return e1.cost < e2.cost;
}

edge es[MAX_E];
int V, E;

int par[MAX_V];
int rank_[MAX_V];

void init(int n) {
	for (int i = 0; i < n; i++) {
		par[i] = i;
		rank_[i] = 0;
	}
}

int find(int x) {
	if (par[x] == x) {
		return x;
	} else {
		return par[x] = find(par[x]);
	}
}

void unite(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) return;

	if (rank_[x] < rank_[y]) {
		par[x] = y;
	} else {
		par[y] = x;
		if (rank_[x] == rank_[y]) rank_[x]++;
	}
}

bool same(int x, int y) {
	return find(x) == find(y);
}

ll kruskal() {
	sort(es, es + E, comp);
	init(V);
	ll res = 0;
	for (int i = 0; i < E; i++) {
		edge e = es[i];
		if (!same(e.u, e.v)) {
			unite(e.u, e.v);
			res += e.cost;
		}
	}
	return res;
}

int main() {
	cin >> V >> E;
	int s, t, w;
	for (int i = 0; i < E; i++) {
		cin >> es[i].u >> es[i].v >> es[i].cost;
	}
	cout << kruskal() << endl;
	return 0;
}