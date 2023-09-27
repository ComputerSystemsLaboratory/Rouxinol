#include <cmath>
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<queue>
#include<set>
#include<map>
#include<bitset>
#include<iomanip>
#include<stack>
#include<set>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
ll mod = 1000000007;
vector<ll>G[100005];
int main() {
	int n, m;
	cin >> n >> m;
	int a, b;
	
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		a--; b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	vector<ll>dist(n, mod);
	vector<ll>pre(n, -1);
	dist[0] = 0;
	pre[0] = -1;
	queue<ll>que;
	que.push(0);
	while (!que.empty()) {
		int x = que.front();
		que.pop();
		for (auto id : G[x]) {
			if (dist[id] != mod) {
				continue;
			}
			dist[id] = dist[x] + 1;
			pre[id] = x;
			que.push(id);
		}
	}
	cout << "Yes" << endl;
	for (int i = 1; i < n; i++) {
		cout << pre[i] + 1 << endl;
	}
	return 0;
}