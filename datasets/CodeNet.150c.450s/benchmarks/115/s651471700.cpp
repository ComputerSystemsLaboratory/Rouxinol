#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
static const int N = 1000;

int lenCommon(string s1, string s2)
{
	int m = s1.size();
	int n = s2.size();
	int len = max(m, n);
	vector<vector<int> > dp(N+1, vector<int>(N+1, 0));

	//s1 = " " + s1;
	//s2 = " " + s2;

	//for (int i = 0; i <= len; ++i) dp[i][0] = 0;
	//for (int i = 0; i <= len; ++i) dp[0][i] = 0;

	int ret = 0;
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (s1[i - 1] == s2[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

			ret = max(ret, dp[i][j]);
		}
	}
	return ret;
}

int main()
{
	string s1, s2;
	int num; cin >> num;
	for (int i = 0; i < num; ++i)
	{
		cin >> s1 >> s2;
 		int res = lenCommon(s1, s2);
		cout << res << endl;
	}
}