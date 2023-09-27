#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
const int Max = 4e5 + 5;
int vis[Max]; 
vector<int> e[Max];
int n, m;
int s[Max], s1[Max];
bool bfs(int u)
{
	queue<int> q;
	q.push(u);
	vis[u] = 0;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (int i = 0; i < (int)e[u].size(); i++)
		{
			int v = e[u][i];
			if (vis[v] == -1)
			{
				vis[v] = u;
				q.push(v);
			}
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (vis[i] == -1)return false;
	}
	return true;
}
int main()
{
	
	while (cin >> n >> m)
	{
		memset(vis, -1, sizeof(vis));
		memset(s, 0, sizeof(s));
		memset(s1, 0, sizeof(s1));
		int k = 0;
		for (int i = 1; i <= m; i++)
		{
		
			cin >> s[k] >> s1[k];
			e[s[k]].push_back(s1[k]);
			e[s1[k]].push_back(s[k]);
			k++;
		}
		if (!bfs(1))
			cout << "No" << endl;
		else
		{
			cout << "Yes" << endl;
			for (int i = 2; i <= n; i++)
				cout << vis[i] << endl;
		}
		for (int i = 0; i < k; i++)
		{
			e[s[i]].clear();
			e[s1[i]].clear();
		}
	}
	return 0;
}