#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<string, int> m;
	queue<pair<string, int>> Q;
	int n, q;
	int consumed_time = 0;
	scanf("%d %d", &n, &q);
	for (int i = 0; i < n; i++)
	{
		string s;
		int t;
		cin >> s >> t;
		m.insert(make_pair(s,t));
		Q.push(make_pair(s, t));
	}
	/*for (auto i = m.begin(); i != m.end() ; i++)
	{
		cout << i->first << " " << i->second << endl;
	}*/

	while (!Q.empty())
	{
		auto t = Q.front(); Q.pop();
		if (t.second <= q)
		{
			consumed_time += t.second;
			cout << t.first << " " << consumed_time << endl;
		}
		else
		{
			consumed_time += q;
			Q.push(make_pair(t.first, t.second - q));
		}
	}

	return 0;
}