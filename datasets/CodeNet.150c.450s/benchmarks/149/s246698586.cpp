#include <iostream>
#include <algorithm>
#include <array>
#include <cstdint>
#include <functional>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string>
#include <vector>

#define INF 1000000000
#define MOD 1000000007
#define ll long long
#define rep(i,a,b) for(int i = (a); i < (b); ++i)
#define bitget(a,b) (((a) >> (b)) & 1)
#define vint vector<int>
#define ALL(x) (x).begin(),(x).end()
#define C(x) cout << #x << " : " << x << endl
#define scanf scanf_s

using int32 = int_fast32_t;
using int64 = int_fast64_t;
using uint32 = uint_fast32_t;
using uint64 = uint_fast64_t;

using namespace std;

class UnionFind {
public:
	std::vector<int32> tree;
	//?????????????????????
	UnionFind(size_t size) :tree(size, -1) {}
	//x?????£??¨?????????
	int32 find(int32 x) {
		if (tree[x] < 0) return x;
		return tree[x] = find(tree[x]);
	}
	//x,y???????´??????????2???????????????
	void unite(int32 x, int32 y) {
		x = find(x);
		y = find(y);
		if (x == y) return;
		if (tree[x] > tree[y]) {
			tree[y] += tree[x];
			tree[x] = y;
		}
		else {
			tree[x] += tree[y];
			tree[y] = x;
		}
		return;
	}
	//x???????´???????????????????????´???°
	size_t size(int32 x) {
		return -tree[find(x)];
	}
	//x,y???????????????????±????????????????
	bool same(int32 x, int32 y) {
		return find(x) == find(y);
	}
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int32 n, q;
	cin >> n >> q;
	UnionFind t(n);
	bool c;
	int32 x, y;
	rep(i, 0, q) {
		cin >> c >> x >> y;
		if (c) {
			printf("%d\n", t.same(x, y));
		}
		else {
			t.unite(x, y);
		}
	}
	return 0;
}