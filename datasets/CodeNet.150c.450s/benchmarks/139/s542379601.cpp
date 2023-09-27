#include <bits/stdc++.h>
#define ll u_int64_t
#define rep(i, n) for (int i=0; i<n; i++)
 
using namespace std;
const double PI = acos(-1);
using Graph = vector<vector<int>>;
 
int main() {
	int n, m;
	cin >> n >> m;
	Graph G(n);
	rep(i, m) {
		int a, b;
		cin >> a >> b;
		G[a-1].push_back(b);
		G[b-1].push_back(a);
	}
	vector<int> flag(n, -1);
	queue<int> que;

	flag[0] = 0;
	que.push(1);

	while (!que.empty()) {
		int v = que.front();
		que.pop();

		for (auto nv : G[v-1]) {
			if (flag[nv-1] != -1) continue;

			flag[nv-1] = v;
			que.push(nv);
		}
	}
	rep(i, n) {
		if (flag[i] == -1) cout << "No" << endl;
	}
	cout << "Yes" << endl;
	for (int i = 1; i < n; i++) {
		cout << flag[i] << endl;
	}
}