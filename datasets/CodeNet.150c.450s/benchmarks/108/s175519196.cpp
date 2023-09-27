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
///                →,↑,←,↓,↗,↖,↙,↘
int dx[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };
int dy[8] = { 0, 1, 0, -1, 1, 1, -1, -1 };

static const int N = 100;
int d[N];
int n,M[N][N];

void dfs() {
	queue<int> q;
	q.push(0);
	int i;
	rep(i, n) d[i] = INF;
	d[0] = 0;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		int v;
		rep(v, n) {
			if (M[u][v] == 0) continue;
			if (d[v] != INF) continue;
			d[v] = d[u] + 1;
			q.push(v);
		}
	}
	rep(u, n) {
		cout << u + 1 << ' ' << ((d[u] == INF) ? (-1) : d[u]) << '\n';
	}
}

signed main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i;
	rep(i, n) {
		int u, k, v;
		cin >> u >> k;
		u--;
		int j;
		rep(j, k) {
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}
	dfs();
	return 0;
}
