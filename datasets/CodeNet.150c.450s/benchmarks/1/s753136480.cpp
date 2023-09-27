#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve1()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> dp(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		dp[i] = 1;
	}
	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a[j] < a[i])
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		res = max(res, dp[i]);
	}
	cout << dp[n - 1] << endl;
}

void solve2()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> dp(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		dp[i] = 2e9;
	}
	for (int i = 0; i < n; ++i)
	{
		*lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
	}
	cout << lower_bound(dp.begin(), dp.end(), 2e9) - dp.begin() << endl;
}

int main()
{
	//solve1();
	solve2();
	return(0);
}