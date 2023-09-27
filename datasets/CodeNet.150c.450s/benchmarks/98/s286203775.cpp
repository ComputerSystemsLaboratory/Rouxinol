#include <iostream>
#include <map>
#include <list>
#include <numeric>
using namespace std;


int main()
{
	int n, m;
	while (cin >> n >> m, n + m)
	{
		int t[100];
		int h[100];
		for (int i = 0; i < n; i++) cin >> t[i];
		for (int i = 0; i < m; i++) cin >> h[i];
		int sumT = accumulate(t, t + n, 0);
		int sumH = accumulate(h, h + m, 0);

		list<pair<int, int>> a;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (sumT - t[i] + h[j] == sumH - h[j] + t[i])
				{
					a.push_back(pair<int, int>(t[i], h[j]));
				}
			}
		}

		pair<int, int> ans(999, 999);
		for (auto x : a)
		{
			if (ans.first + ans.second > x.first + x.second)
			{
				ans = x;
			}
		}
		if (a.empty()) 
			cout << -1 << endl;
		else
			cout << ans.first << " " << ans.second << endl;
	}

	return 0;
}