#include <cstdio>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

#define rep(i,a,n) for(int (i)=a;(i)<(int)(n);(i)++)
#define rrep(i,a,n) for(int (i)=(n)-1;(i)>=a;(i)--)
#define all(x) (x).begin(),(x).end()

typedef long long ll;

const int INF = 1e9;

struct UnionFind {
	vector<int> parent;
	UnionFind(int size) : parent(size, -1) {}
	bool unionSet(int x, int y) {
		x = root(x);
		y = root(y);
		if (x != y) {
			if (parent[y] < parent[x]) swap(x, y);
			parent[x] += parent[y];
			parent[y] = x;
		}
		return x != y;
	}
	bool findSet(int x, int y) {
		return root(x) == root(y);
	}
	int root(int x) {
		return parent[x] < 0 ? x : parent[x] = root(parent[x]);
	}
	int size(int x) {
		return -parent[root(x)];
	}
};

int main() {
	int n, q;
	cin >> n >> q;
	struct UnionFind uf(n);
	int com[q], x[q], y[q];
	rep(i,0,q) {
		cin >> com[i] >> x[i] >> y[i];
	}
	rep(i,0,q) {
		if (com[i] == 0) {
			uf.unionSet(x[i], y[i]);
		} else {
			cout << (uf.findSet(x[i], y[i]) ? "1" : "0") << endl;
		}
	}
}