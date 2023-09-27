#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define MAX_N 10000

int par[MAX_N];
int rank_[MAX_N];

void init(int n) {
	for (int i = 0; i < n; i++) {
		par[i] = i;
		rank_[i] = 0;
	}
}

int find_(int x) {
	if (par[x] == x)
		return x;
	else
		return par[x] = find_(par[x]);
}

void unite(int x, int y) {
	x = find_(x);
	y = find_(y);
	if (x == y) return;

	if (rank_[x] < rank_[y]) {
		par[x] = y;
	} else {
		par[y] = x;
		if (rank_[x] == rank_[y])
			rank_[x]++;
	}
}

bool same(int x, int y) {
	return find_(x) == find_(y);
}

int main() {
	int n, q;
	cin >> n >> q;
	init(n);
	int com, x, y;
	while (q-->0) {
		cin >> com >> x >> y;
		if (com == 0)
			unite(x, y);
		else
			cout << same(x, y) << endl;
	}
	return 0;
}