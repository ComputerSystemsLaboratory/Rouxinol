#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<iomanip>
#include<bitset>
#include<math.h>
#include<stack>
#include<set>
using namespace std;
#define int long long
int mod = 1e9 + 7;
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	int n, m;
	cin >> n >> m;
	vector<vector<int> > g(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	queue<int> q;
	vector<int> used(n, -1);
	q.push(0);
	used[0] = 0;
	while (!q.empty()) {
		int a = q.front();
		q.pop();
		for (int i = 0; i < g[a].size(); i++) {
			int to = g[a][i];
			if (used[to] == -1) {
				used[to] = a;
				q.push(to);
			}
		}
	}
	for (int i = 1; i < n; i++) {
		if (used[i] == -1) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	for (int i = 1; i < n; i++) {
		cout << used[i]+1 << endl;
	}
}
	