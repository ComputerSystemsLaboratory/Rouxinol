#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int n, m;
vector<int> v[N];
int si[N];
queue<int> que;

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	
	memset(si, -1, sizeof si);
	
	cin >> n >> m;
	int a, b;
	while (m --)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	que.push(1);
	si[1] = 0;
	while (que.size())
	{
		int u = que.front();
		que.pop();
		for (auto& i : v[u])
		{
			if (si[i] == -1)
			{
				si[i] = u;
				que.push(i);
			}
		}
	}
	
	bool ok = true;
	for (int i = 1; i <= n; ++i)
	{
		if (si[i] == -1) 
		{
			ok = false;
			break;
		}
	}
	
	if (!ok) cout << "No\n";
	else
	{
		cout << "Yes\n";
		for (int i = 2; i <= n; ++i) cout << si[i] << '\n';
	}
	
	return 0;
}