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
#include <iomanip>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define INF (1 << 30)
#define INFL (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define EPS 1e-10

#define ll long long
#define ull unsigned long long
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
void digit(int d) { cout << fixed << setprecision(d); }
void IOup() { cin.tie(0); ios::sync_with_stdio(false); }

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

	int count() {
		int cnt = 0;
		for (int i = 0, n = data.size(); i < n; ++i) {
			if (i == root(i))
				cnt++;
		}
		return cnt;
	}
};

int main() {
	UnionFind uf;
	int n, m, c, x, y;
	cin >> n >> m;
	uf.resize(n);
	while (m--) {
		cin >> c >> x >> y;
		if (c) {
			cout << uf.same(x, y) << endl;
		}
		else {
			uf.unite(x, y);
		}
	}

	return 0;
}