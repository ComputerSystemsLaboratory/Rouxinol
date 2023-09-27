#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
#define maxn 1005
using namespace std;

int dp[maxn][maxn];
int len1, len2;
string s1, s2;

int lcs()
{
	memset(dp, 0, sizeof(dp));
	for(int i=1;i<=len1;i++)
		for (int j = 1; j <= len2; j++)
		{
			if (s1[i] == s2[j]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	return dp[len1][len2];
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		cin >> s1 >> s2;
		len1 = s1.size(), len2 = s2.size();
		s1 = ' ' + s1;
		s2 = ' ' + s2;
		cout << lcs() << endl;
	}
	return 0;
}