#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> t(n + 1);
	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;
		t[a].push_back(b);
		t[b].push_back(a);
	}

	vector<int> ret(n + 1, -1);
	vector<bool> check(n + 1, false);

	queue<int> q;
	q.push(1);
	check[1] = true;

	while (!q.empty())
	{
		int f = q.front();
		for (auto& j : t[f]) 
		{
			if (check[j]) {
				continue;
			}
			ret[j] = f;
			check[j] = true;
			q.push(j);
		}
		q.pop();
	}

	cout << "Yes" << endl;
	for (int i = 2; i <= n; ++i)
	{
		cout << ret[i] << endl;
	}

	return 0;
}