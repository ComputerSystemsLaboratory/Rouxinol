#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main() {
	int n, u, k, v;
	cin >> n;
	vector<int> ans(n,1000000000);
	vector<vector<int>> adj(n);
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		while (k--)cin >> v, adj[u-1].push_back(v-1);
	}
	queue<pair<int, int>> q;//<idx,path>
	q.push(pair<int, int>(0, 1));
	while (!q.empty()) {
		auto tmp = q.front(); q.pop();
		ans[tmp.first] = min(ans[tmp.first], tmp.second);
		if (ans[tmp.first] != tmp.second)continue;
		for (int i = 0; i < adj[tmp.first].size(); i++) q.push(pair<int, int>(adj[tmp.first][i], tmp.second+1));
	}
	for (int i = 0; i < n; i++)	cout << i + 1 << " " << (ans[i] == 1000000000 ? -1 : ans[i]-1) << endl;
	
}