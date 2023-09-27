#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int dp[1002][1002];

int main()
{
	for (int i = 0; i < 1002; i++)
	{
		dp[0][i] = 0;
		dp[i][0] = 0;
	}
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string str1, str2;
		cin >> str1 >> str2;
		for (int i = 1; i <= str1.size(); i++)
		{
			for (int j = 1; j <= str2.size(); j++)
			{
				if (str1[i - 1] == str2[j - 1])dp[i][j]=dp[i - 1][j - 1] + 1;
				else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
		cout << dp[str1.size()][str2.size()] << endl;
	}
	return 0;
}