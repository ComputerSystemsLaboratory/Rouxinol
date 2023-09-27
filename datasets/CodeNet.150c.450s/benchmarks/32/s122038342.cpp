#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int m, nmin, nmax;
	while (cin >> m >> nmin >> nmax, m || nmin || nmax)
	{
		vector<int> p(m);
		for (int i = 0; i < m; ++i)
		{
			cin >> p[i];
		}
		int gap = -1;
		int ans = 0;
		for (int i = nmin - 1; i < nmax; ++i)
		{
			if (gap <= p[i] - p[i + 1])
			{
				gap = p[i] - p[i + 1];
				ans = i + 1;
			}
		}
		cout << ans << endl;
	}
}

int main()
{
	solve();
	return(0);
}