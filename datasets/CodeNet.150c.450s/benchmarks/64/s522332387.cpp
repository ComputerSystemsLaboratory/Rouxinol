#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int dp[40001];

void solve()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> vec[i];
	}
	fill(dp, dp + 40000, 0);
	dp[0] = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 40000; j >= vec[i]; --j)
		{
			if (dp[j - vec[i]] > 0)
			{
				dp[j] = dp[j - vec[i]];
			}
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		int m;
		cin >> m;
		if (dp[m] > 0)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}