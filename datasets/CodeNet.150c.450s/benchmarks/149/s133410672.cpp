// DSL_1_A.cpp
// Set - Disjoint Set???Union Find Tree

#include <iostream>
#include <vector>
using namespace std;
const int N = 10000 + 5;
vector<int> id(N, -1);
vector<int> sz(N, 1);
int root(int x)
{
	while (x != id[x]) {
		id[x] = id[id[x]];
		x = id[x];
	}
	return x;
}

void same(int x, int y)
{
	if (root(x) == root(y)) {
		cout << 1 << endl;
	}
	else cout << 0 << endl;
}

void unite(int x, int y)
{
	int rx = root(x);
	int ry = root(y);
	if (rx == ry) return;
	else if (sz[rx] < sz[ry]) {
		id[rx] = ry;
		sz[ry] += sz[rx];
	}
	else {
		id[ry] = rx;
		sz[rx] += sz[ry];
	}
}
int main()
{
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		id[i] = i;
	}
	int cmd, x, y;
	while (q--) {
		cin >> cmd >> x >> y;
		if(cmd) {
			same(x, y);
		}
		else unite(x, y);
	}
	return 0;
}