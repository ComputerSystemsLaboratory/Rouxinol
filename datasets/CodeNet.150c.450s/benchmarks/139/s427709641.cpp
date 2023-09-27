#include <cmath>
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<iomanip>
#include<queue>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
ll inf = 1000000007;
vector<ll>to[100005];
int main(void) {
	ll n, m;
	cin >> n >> m;
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		a--; b--;
		to[a].push_back(b);
		to[b].push_back(a);
	}

	queue<ll>que;
	vector<ll>dist(n, inf);
	vector<ll>pre(n, -1);
	dist[0] = 0;
	que.push(0);
	while (!que.empty()) {
		int x = que.front();
		que.pop();
		for (auto v : to[x]) {
			if (dist[v] != inf) {
				continue;
			}
			dist[v] = dist[x] + 1;
			pre[v] = x + 1;
			que.push(v);
		}
	}
	cout << "Yes" << endl;
	for (int i = 1; i < n; i++) {
		cout << pre[i] << endl;
	}
	return 0;
}
