#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int lcs(string a, string b)
{
	vector<vector<int> > dp(1001, vector<int>(1001));
	for (int i = 0; i < a.size(); ++i)
	{
		for (int j = 0; j < b.size(); ++j)
		{
			if (a[i] == b[j])
			{
				dp[i + 1][j + 1] = dp[i][j] + 1;
			}
			else
			{
				dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
			}
		}
	}
	return(dp[a.size()][b.size()]);
}

void solve()
{
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		string a, b;
		cin >> a >> b;
		cout << lcs(a, b) << endl;
	}
}

int main()
{
	solve();
	return(0);
}