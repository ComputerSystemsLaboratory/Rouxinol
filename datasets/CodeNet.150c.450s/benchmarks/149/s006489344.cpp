#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

class UnionFind{
	int par[10000], high[10000];
public:
	UnionFind(int n) {
		for (int i = 0; i < n; i++)par[i] = i;
	}
	int find(int x) {
		if (par[x] == x)return x;
		return par[x] = find(par[x]);
	}
	void unite(int x, int y) {
		x = find(x); y = find(y);
		if (x == y)return;
		if (high[x] > high[y])par[y] = x;
		else {
			par[x] = y;
			if (high[x] == high[y])high[y]++;
		}
	}
	bool same(int x, int y) {
		return find(x) == find(y);
	}
};
int main() {
	int n, q; scanf("%d%d", &n, &q);
	UnionFind uf(n);
	rep(i, q) {
		int com, x, y; scanf("%d%d%d", &com, &x, &y);
		if (com)printf("%d\n", uf.same(x, y));
		else uf.unite(x, y);
	}
}