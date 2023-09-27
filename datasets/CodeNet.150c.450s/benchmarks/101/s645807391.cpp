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

static const int MAX = 100000;
static const int NIL = -1;
int n, m;
vector<int> G[MAX];
int color[MAX];

void dfs(int r , int col) {
	stack<int> s;
	s.push(r);
	color[r] = col;
	while (!s.empty()) {
		int u = s.top();
		s.pop();
		int i;
		rep(i, G[u].size()) {
			int v = G[u][i];
			if (color[v] == NIL) {
				color[v] = col;
				s.push(v);
			}
		}
	}
}

void assignCol() {
	int col = 1;
	int i;
	rep(i, n) color[i] = NIL;
	rep(i, n) {
		if (color[i] == NIL)
			dfs(i,col++);
	}
}

signed main() {
	ios::sync_with_stdio(false);
	int q;
	cin >> n >> m;
	int i,s,t;
	rep(i, m) {
		cin >> s >> t;
		G[s].pb(t);
		G[t].pb(s);
	}
	assignCol();
	cin >> q;
	rep(i, q) {
		cin >> s >> t;
		if (color[s] == color[t])
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}
