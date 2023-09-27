#include <vector>
#include <iostream>

using namespace std;

#define INF 10000000

int main()
{
	unsigned n, m; cin >> n >> m;

	vector<int> d(m);
	vector<int> dp(n + 1, INF);

	for (vector<int>::size_type i = 0; i < m; i++)
	{
		cin >> d[i];
	}

	dp[0] = 0;

	for (unsigned i = 1; i <= n; i++)
	{
		for (vector<int>::size_type j = 0; j < m; j++)
		{
			if (i >= d[j])
			{
				if (dp[i] >= dp[i - d[j]] + 1)
				{
					dp[i] = dp[i - d[j]] + 1;
				}
			}
		}
	}

	cout << dp[n] << endl;

	return 0;
}