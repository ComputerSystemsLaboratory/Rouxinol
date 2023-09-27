#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<bitset>
#include<vector>
#include<deque>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<cmath>
#include<iomanip>
#include <functional>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
const int INF = 1 << 28;
//cout << fixed << std::setprecision(9)
//memset(a, 0, sizeof(a));
//--------------------------


int n, m, q;
vector<int> g[100005];
int col[100005];

void dfs(int r, int c)
{
	stack<int> stk;
	stk.push(r);
	col[r] = c;

	while (!stk.empty()) {
		int u = stk.top(); stk.pop();
		for (int i = 0; i < g[u].size(); i++) {
			int v = g[u][i];
			if (col[v] == -1) {
				stk.push(v);
				col[v] = c;
			}
		}

	}
}

void solve()
{
	int c = 0;

	for (int i = 0; i < n; i++) {
		col[i] = -1;
	}

	for (int i = 0; i < n; i++) {
		if (col[i] == -1) {
			dfs(i, ++c);
		}
	}
}


int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;
		g[s].push_back(t);
		g[t].push_back(s);
	}
	solve();
	cin >> q;
	for (int i = 0; i < q; i++) {
		int s, t;
		cin >> s >> t;
		if (col[s] == col[t]) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}