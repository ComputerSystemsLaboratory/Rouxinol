#include <bits/stdc++.h>
using namespace std;

/*
部屋1からの距離を求めれば良い
bfsでいける
多分存在しないことはない
*/

int	main(void)
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edge(n);
	int a, b;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		a--; b--;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	vector<bool> is_visit(n, false);
	vector<int> ans(n, -1);
	queue<int> q;
	q.push(0);
	is_visit[0] = true;
	while (q.size())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			int room = q.front(); q.pop();
			for (int j = 0; j < edge[room].size(); j++)
			{
				if (is_visit[edge[room][j]]) continue;
				ans[edge[room][j]] = room + 1;
				is_visit[edge[room][j]] = true;
				q.push(edge[room][j]);
			}
		}
	}
	cout << "Yes" << endl;
	for (int i = 1; i < n; i++) cout << ans[i] << endl;
	return (0);
}
