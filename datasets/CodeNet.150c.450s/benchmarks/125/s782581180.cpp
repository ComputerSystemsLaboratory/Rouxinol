#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<vector<int>> adjacent;
vector<pair<int, int>> ans;
vector<bool>checked;

//?????????is????????????
int dfs(int now,int time = 1) {
	ans[now].first = time;
	checked[now] = true;
	for (int i = 0; i < adjacent[now].size(); i++) {
		if (!checked[adjacent[now][i]]) {
			time = dfs(adjacent[now][i], time + 1);
		}
	}
	ans[now].second = time+1;
	return time + 1;
}

int main() {
	int n;
	cin >> n;
	adjacent = vector<vector<int>>(n);
	checked = vector<bool>(n, false);
	ans.resize(n);

	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v;
			cin >> v;
			adjacent[u - 1].push_back(v-1);
		}
	}
	
	int time = dfs(0, 1)+1;
	for (int i = 0; i < n; i++) {
		if (!checked[i])time = dfs(i, time)+1;
	}
	
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << ans[i].first << " " << ans[i].second << endl;
	}

}