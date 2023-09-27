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
#define INF (1 << 30)
#define LLINF (1LL << 62)
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

void YES() { cout << "YES\n"; }
void NO() { cout << "NO\n"; }
void Yes() { cout << "Yes\n"; }
void No() { cout << "No\n"; }
void yes() { cout << "yes" << endl; }
void no() { cout << "no" << endl; }

int n, m;
vector<vector<int>> g;
int color[100000];

void dfs(int s, int col) {
	if (color[s] > 0)
		return;
	color[s] = col;

	for (int i = 0; i < g[s].size(); ++i) {
		dfs(g[s][i], col);
	}
}

int main() {
	int q, s, t;
	cin >> n >> m;
	g.resize(n);
	while (m--) {
		cin >> s >> t;
		g[s].push_back(t);
		g[t].push_back(s);
	}

	int col = 1;
	for (int i = 0; i < n; ++i) {
		dfs(i, col++);
	}

	cin >> q;
	while (q--) {
		cin >> s >> t;
		if (color[s] == color[t])
			yes();
		else
			no();
	}

	return 0;
}