#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
#define MOD 998244353

using namespace std;
using ll = long long;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> room[n];
	rep(i,m) {
		int a, b;
		cin >> a >> b;
		--a; --b;
		room[a].push_back(b);
		room[b].push_back(a);
	}
	vector<int> yudo(n,-1);
	queue<int> q;
	q.push(0);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i : room[now]) {
			if (yudo[i] == -1) {
				yudo[i] = now;
				q.push(i);
			}
		}
	}
	cout << "Yes" << endl;
	for (int i = 1; i < n; i++) {
		int ans = yudo[i] + 1;
		cout << ans << endl;
	}
	return 0;
}
