#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define ll long long
#define ull unsigned long long
#define INF (1 << 29)
#define LLINF (1LL << 61)
#define MOD7 1000000007
#define MOD9 1000000009
#define eps 1e-9
#define P pair<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pul pair<ull, ull>
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);--i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define RREP(i,n) for (int i=(n)-1;i>=0;--i)

void YES() { cout << "YES" << endl; }
void NO() { cout << "NO" << endl; }
void Yes() { cout << "Yes" << endl; }
void No() { cout << "No" << endl; }
void yes() { cout << "yes" << endl; }
void no() { cout << "no" << endl; }

class UnionFind {
	vector<int> data;
public:

	UnionFind(int size = 0) {
		resize(size);
	}
	void resize(int size) {
		data.resize(size, -1);
	}

	int root(int x) {
		return data[x] < 0 ? x : data[x] = root(data[x]);
	}

	void unite(int x, int y) {
		x = root(x);
		y = root(y);
		if (x == y)
			return;

		if (data[y] < data[x])
			swap(x, y);
		data[x] += data[y];
		data[y] = x;
	}

	bool same(int x, int y) {
		return root(x) == root(y);
	}
};

int main() {
	int n, q, c, x, y;
	cin >> n >> q;

	UnionFind uf(n);
	while (q--) {
		cin >> c >> x >> y;
		if (c)
			cout << uf.same(x, y) << endl;
		else
			uf.unite(x, y);
	}

	return 0;
}