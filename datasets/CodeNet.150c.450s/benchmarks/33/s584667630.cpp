#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
	int x, y, s;
	while (cin >> x >> y >> s, x || y || s)
	{
		int maxv = -1;
		for (int i = 1; i < s; ++i)
		{
			for (int j = 1; j < s; ++j)
			{
				int cost = (int)(i * (100 + x) / 100.0) + (int)(j * (100 + x) / 100.0);
				if (cost > s)
				{
					break;
				}
				if (cost == s)
				{
					int newCost = (int)(i * (100 + y) / 100.0) + (int)(j * (100 + y) / 100.0);
					maxv = max(maxv, newCost);
				}
			}
		}
		cout << maxv << endl;
	}
}

int main()
{
	solve();
	return(0);
}