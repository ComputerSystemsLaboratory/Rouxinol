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

static const int MAX = 100;
static const int White = 0;
static const int Gray = 1;
static const int Black = 2;

int n, M[MAX][MAX],color[MAX];

int prim() {
	int d[MAX], p[MAX];
	int i, sum = 0;
	rep(i, n) {
		d[i] = INF;
		p[i] = -1;
		color[i] = White;
	}
	d[0] = 0;
	while (true) {
		int u = -1;
		int minv = INF;
		rep(i, n) {
			if (color[i] != Black && d[i] < minv) {
				minv = d[i];
				u = i;
			}
		}
		if (u == -1)
			break;
		color[u] = Black;
		int v;
		rep(v, n) {
			if (color[v] != Black && M[u][v] != INF) {
				if (M[u][v] < d[v]) {
					color[v] = Gray;
					d[v] = M[u][v];
					p[v] = u;
				}
			}
		}
	}
	rep(i, n) {
		if (p[i] != -1) {
			sum += M[i][p[i]];
		}
	}
	return sum;
}

signed main() {
	ios::sync_with_stdio(false);
	cin >> n;
	int i,j;
	rep(i, n) {
		rep(j, n) {
			int a;
			cin >> a;
			M[i][j] = (a == -1) ? INF : a;
		}
	}
	cout << prim() << '\n';
	return 0;
}
