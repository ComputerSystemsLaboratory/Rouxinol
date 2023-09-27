#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 10;
int n, m;
vector<int> E[maxn];
int dis[maxn], fa[maxn];
int main()
{
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= m; ++i)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		E[u].push_back(v);
		E[v].push_back(u);
	}
	memset(dis, -1, sizeof dis);
	dis[1] = 1;
	queue<int> Q;
	Q.push(1);
	while(!Q.empty())
	{
		int x = Q.front(); Q.pop();
		for(auto v : E[x])
			if(dis[v] == -1)
			{
				dis[v] = dis[x] + 1;
				Q.push(v);
				fa[v] = x;
			}
	}
	for(int i = 1; i <= n; ++i) if(dis[i] == -1) { puts("No"); return 0;}
	puts("Yes");
	for(int i = 2; i <= n; ++i)
		cout << fa[i] << endl;
	return 0;
}