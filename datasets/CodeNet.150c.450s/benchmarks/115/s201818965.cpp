#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define MAX 1000
int dp[MAX + 1][MAX + 1];
int LCS(string STR1, string STR2)
{
	int length1 = STR1.size();
	int length2 = STR2.size();
	STR1 = ' ' + STR1;
	STR2 = ' ' + STR2;
	for (int i = 0; i <= length1; i++)
	{
		for (int l = 0; l <= length2; l++)dp[i][l] = 0;
	}
	for (int i = 1; i <= length1; i++)
	{
		for (int l = 1; l <= length2; l++)
		{
			if (STR1[i] == STR2[l])dp[i][l] =dp[i-1][l-1]+1;
			else
			{
				dp[i][l]=max(dp[i - 1][l], dp[i][l - 1]);
			}
		}
	}
	return dp[length1][length2];
}
int main()
{
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		string str1, str2;
		cin >> str1 >> str2;
		cout << LCS(str1, str2) << endl;
	}
	return 0;
}