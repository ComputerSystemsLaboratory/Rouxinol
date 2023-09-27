#include <iostream>
#include <algorithm>
using namespace std;

int dp[1010][1010];

int LCS(string s1, string s2)
{
	s1 = ' ' + s1;
	s2 = ' ' + s2;
	int maxl = 0;
	for(int i = 1; i <= s1.length(); ++ i)
	{
		for(int j = 1; j <= s2.length(); ++ j)
		{
			if(s1[i] == s2[j])
			{
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else
			{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
			maxl = max(maxl, dp[i][j]);
		}
	}
	
	return dp[s1.length()-1][s2.length()-1];
}

int main()
{
	string s1, s2;
	int n, sum;
	cin >> n;
	for(int i = 0; i < n; ++ i)
	{
		cin >> s1 >> s2;
		sum = LCS(s1, s2);
		cout << sum << endl;
	}
	
	return 0;
}
