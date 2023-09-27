#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>

using namespace std;
using ll = long long int;
#define rep(i,n) for(int i = 0; i < n; i++)
#define FOR(i, a, b)  for(int i = (a); i < (b) ; i++)
#define pb push_back
#define SORT(v,n) sort(v, v+n)
#define ALL(x) (x).begin(),(x).end()
#define debug(x) cerr << #x << ": " << x << '\n'
#define elif else if
#define itn ll
#define int ll
const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
int dx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };
typedef vector<vector<int>> vvi;
typedef vector<vector<vector<int>>> vvvi;

class Disjoint {
public:
	Disjoint(){}
	Disjoint(int size) {
		p.resize(size, 0);
		rank.resize(size, 0);
		int i;
		rep(i, size) makeSet(i);
	}

	bool same(int x, int y) {
		return findSet(x) == findSet(y);
	}

	void makeSet(int x) {
		p[x] = x;
		rank[x] = 0;
	}
	void unite(int x, int y) {
		link(findSet(x), findSet(y));
	}
	void link(int x, int y) {
		if (rank[x] > rank[y]) {
			p[y] = p[x];
		}
		else {
			p[x] = p[y];
			if (rank[x] == rank[y])
				rank[y]++;
		}
	}
	int findSet(int x) {
		if (p[x] != x) {
			p[x] = findSet(p[x]);
		}
		return p[x];
	}
private:
	vector<int> p,rank;
};

signed main() {
	ios::sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	Disjoint ds = Disjoint(n);
	rep(i, q) {
		int c, x, y;
		cin >> c >> x >> y;
		if (c == 0) {
			ds.unite(x, y);
		}elif(c == 1) {
			if (ds.same(x, y)) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
	}
	return 0;
}
