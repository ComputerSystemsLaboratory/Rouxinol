#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
	vector<int> value;
	UnionFind(int size = 0): value(size, -1){}
	int find(int x){
		if (value[x] < 0) return x;
		return value[x] = find(value[x]);
	}
	int size(int x){
		return -value[find(x)];
	}
	bool same(int x, int y){
		return find(x) == find(y);
	}
	bool unite(int x, int y){
		x = find(x);
		y = find(y);
		if (x == y) return false;
		if (value[x] > value[y]) swap(x, y);
		value[x] += value[y];
		value[y] = x;
		return true;
	}
};

int main()
{
	int n, q;
	scanf("%d %d", &n, &q);
	
	UnionFind uf(n);
	
	for (int i = 0; i < q; i++){
		int com, x, y;
		scanf("%d %d %d", &com, &x, &y);
		
		if (com == 0){
			uf.unite(x, y);
		}
		else {
			printf("%d\n", uf.same(x, y));
		}
	}
	
	return 0;
}