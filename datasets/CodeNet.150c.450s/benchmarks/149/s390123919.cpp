#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define all(v) v.begin(), v.end()
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<pair<int, int> > vpii;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const int inf = 1000000000;
const int mod = 1000000007;
const double eps = 1e-9;
const int dx[] = { -1, 0, 1, 0};
const int dy[] = { 0, -1, 0, 1};

struct UnionFind {
	vector<int> data;
	// ?????????
	void init(int n) {
		data.assign(n, -1);
	}
	// x ??¨ y ?????????
	bool unionSet(int x, int y) {
		x = root(x); y = root(y);
		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y];
			data[y] = x;
		}
		return x != y;
	}
	// x ??¨ y ?????????????????????????????????
	bool findSet(int x, int y) {
		return root(x) == root(y);
	}
	// x ??????????????????????´???°????±???????
	int size(int x) {
		return -data[root(x)];
	}
	// ????????¢???
	int root(int x) {
		return data[x] < 0 ? x : data[x] = root(data[x]);
	}
};

int main() {
	int n, q;
	cin >> n >> q;

	UnionFind uf;
	uf.init(n);

	rep(i, q) {
		int c, x, y;
		cin >> c >> x >> y;

		if (c == 0) {
			uf.unionSet(x, y);
		} else {
			cout << uf.findSet(x, y) << endl;
		}
	}
}