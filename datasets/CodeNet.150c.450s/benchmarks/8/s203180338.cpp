#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	pair<int, int> p;
	for (int i = 0; i < n; i++)
	{
		string t, h;
		cin >> t >> h;
		if (t == h)
		{
			p.first++;
			p.second++;
			continue;
		}
		map<string, int> m;
		m[t]++;
		m[h]++;
		for (auto x : m)
		{
			if (x.first == t)
			{
				p.second += 3;
				break;
			}
			else
			{
				p.first += 3;
				break;
			}
		}
	}
	cout << p.first << " " << p.second << endl;
	return 0;
}