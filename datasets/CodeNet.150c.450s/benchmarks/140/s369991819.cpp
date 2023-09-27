#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <queue>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

#define REP(i, n) for(ll i = 0;i < n;i++)
#define REPR(i, n) for(ll i = n;i >= 0;i--)
#define FOR(i, m, n) for(ll i = m;i < n;i++)
#define FORR(i, m, n) for(ll i = m;i >= n;i--)
#define REPO(i, n) for(ll i = 1;i <= n;i++)
#define ll long long
#define INF (ll)1 << 60
#define MINF (-1 * INF)
#define ALL(n) n.begin(),n.end()
#define MOD 1000000007
#define P pair<ll, ll>


#define PP pair<ll, P>
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

vector<PP> g;
ll kr() {
	ll cost = 0;
	sort(ALL(g));
	UnionFind uni(110000);
	REP(i, g.size()) {
		ll a = g[i].second.first, b = g[i].second.second;
		if (!uni.findSet(a, b)) {
			uni.unionSet(a, b);
			cost += g[i].first;
		}
	}
	return cost;
}

int main() {
	ll n, m;
	cin >> n >> m;
	REP(i, m) {
		ll a, b, c;
		cin >> a >> b >> c;
		g.push_back(PP(c, P(a, b)));
	}
	cout << kr() << endl;
}

