#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <vector>
#include <array>
#include <map>
#include <set>
using namespace std;

#define IS_POWER_TWO(x) (!(x & (x-1))) 
struct UnionFind {
	vector<int> data;
	UnionFind(int size) : data(size, -1) { }
	bool unionSet(int x, int y) {
		x = root(x); y = root(y);
		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y]; data[y] = x;
		}
		return x != y;
	}
	bool findSet(int x, int y) {
		return root(x) == root(y);
	}
	int root(int x) {
		return data[x] < 0 ? x : data[x] = root(data[x]);
	}
	int size(int x) {
		return -data[root(x)];
	}
};

typedef pair<int, int> pii;
const pii Dir_eight[8]{
	{0,-1},{-1,0},{1,0},{0,1},{-1,-1},{1,1},{-1,1},{1,-1}
};

int main()
{
	int w, h;

	while (scanf("%d %d", &w, &h)) {
		if (w == 0)
			return 0;
		array<array<int, 52>, 52> map = {};
		UnionFind uf(2501);

		for (int i = 0; h > i; i++) {
			for (int j = 0; w > j; j++) {
				int a;
				scanf("%d", &a);

				map[j + 1][i + 1] = a;
				if (!a)uf.unionSet(i*w + j, h*w);
			}
		}

		for (int i = 1; h >= i; i++) {
			for (int j = 1; w >= j; j++) {
				if (map[j][i]) {
					for (int k = 0; 8 > k; k++) {
						if (map[j + Dir_eight[k].first][i + Dir_eight[k].second]) {
							uf.unionSet(j + Dir_eight[k].first + (i + Dir_eight[k].second-1)*w-1, (i-1)*w + j-1);
						}
					}
				}
			}
		}

		set<int> ver;

		for (int i = 0; h*w+1 > i; i++) {
			ver.insert(uf.root(i));
		}
		
		printf("%d\n", ver.size() - 1);
	}
	return 0;
}