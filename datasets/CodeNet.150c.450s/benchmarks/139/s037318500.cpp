#include <bits/stdc++.h>
using namespace std;

int connectedCount(int node, vector<set<int>>& graph, vector<int>& visited)
{
	if(visited[node])
		return 0;

	int ret = 1;
	visited[node] = 1;

	for(auto& child: graph[node])
	{
		if(visited[child] == 0)
				ret += connectedCount(child, graph, visited);
	}

	return ret;
}

int main()
{
	int n, m;
 	cin >> n >> m;
	vector<set<int>> v(n+1, set<int>());
	for(int i = 0; i < m; ++i)
	{
		int a,b;
		cin >> a >> b;
		v[a].insert(b);
		v[b].insert(a);
	}
	vector<int> visited(n+1, 0);
	if(connectedCount(1, v, visited) != n)
	{
		cout << "No";
	}
	else
	{
		vector<int> parent(n+1, 0);
		vector<int> visited(n+1, 0);
		queue<int> q;
		q.push(1);
		visited[1] = 1;

		while(!q.empty())
		{
			int cnt = q.size();
			while(cnt--)
			{
			int top = q.front(); q.pop();
			for(auto& child: v[top])
			{
				if(visited[child] == 0)
				{
					visited[child] = 1;
					q.push(child);
					parent[child] = top;
				}
			}
			}
		}
		cout << "Yes\n";
		for(int i = 2; i <= n; ++i)
		{
			cout << parent[i] << "\n";
		}

		return 0;
	}
}