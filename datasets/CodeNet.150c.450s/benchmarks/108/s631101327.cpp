#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string.h>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

vector<int> G[105];
int n;
int d[105];

void bfs(int s)
{
	fill(d, d + n, -1);
	d[s] = 0;

	queue<int> que;
	que.push(s);
	while (!que.empty()) {
		int k = que.front(); que.pop();
		for (int i = 0; i < G[k].size(); i++) {
			int j = G[k][i];
			if (d[j] == -1) {
				d[j] = d[k] + 1;
				que.push(j);
			}
		}
	}
}

int main()
{
	cin >> n;
	int u, k, v;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			cin >> v;
			v--;
			G[u].push_back(v);
		}
	}
	bfs(0);
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << d[i] << endl;
	}

	return 0;
}