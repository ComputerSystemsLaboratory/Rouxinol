#include <bits/stdc++.h>
using namespace std;

bool visited[200000];
int n, m;
int mark[200000];
vector<vector<int>> adj;

int main()
{
	scanf("%d %d", &n, &m);
	adj = vector<vector<int>> (n+5);
	for(int i = 0; i < m; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	queue<int> q;
	q.push(1);
	memset(visited, 0, sizeof(visited));
	memset(mark, 0, sizeof(mark));
	mark[1] = 1;
	while(!q.empty()) {
		int v = q.front();
		q.pop();
		for(int to : adj[v]) {
			if(!mark[to]){
				mark[to] = v;
				q.push(to);
			}
		}
	}

	int c = count(mark+1, mark+n+1, 0);
	if(c) printf("No\n");
	else {
		printf("Yes\n");
		for(int i = 2; i <= n; i++) {
			printf("%d\n", mark[i]);
		}
	}
}