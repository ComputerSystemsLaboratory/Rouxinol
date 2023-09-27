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
static const int White = 0;
static const int Gray = 1;
static const int Black = 2;
int d[N], f[N],tt;
int color[N],n,M[N][N];
int nt[N];

int next(int u) {
	for (int v = nt[u]; v < n; v++) {
		nt[u] = v + 1;
		if (M[u][v]) {
			return v;
		}
	}
	return -1;
}

void dfs_visit(int u) {
	stack<int> S;
	S.push(u);
	color[u] = Gray;
	d[u] = ++tt;
	while (!S.empty()) {
		int u = S.top();
		int v = next(u);
		if (v != -1) {
			if (color[v] == White) {
				color[v] = Gray;
				d[v] = ++tt;
				S.push(v);
			}
		}
		else {
			color[u] = Black;
			S.pop();
			f[u] = ++tt;
		}
	}
}

void dfs() {
	int u;
	rep(u, n)color[u] = White;
	rep(u, n) {
		if (color[u] == White) dfs_visit(u);
	}
	rep(u, n) {
		cout << u + 1 << ' ' << d[u] << ' ' << f[u] << '\n';
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
