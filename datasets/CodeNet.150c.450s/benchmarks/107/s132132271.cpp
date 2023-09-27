#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int MAX_S = 1005;
int dp[MAX_S][MAX_S];

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	rep(i,s1.size()+1)
	{
		dp[i][0] = i;
	}
	rep(j,s2.size()+1)
	{
		dp[0][j] = j;
	}

	int c;
	for (int i = 1; i <= s1.size(); ++i)
	{
		for (int j = 1; j <= s2.size(); ++j)
		{
			if (s1[i-1] == s2[j-1]) c = 0;
			else c = 1;

			dp[i][j] = min(dp[i-1][j]+1, min(dp[i][j-1]+1, dp[i-1][j-1]+c));
		}
	}
	cout << dp[s1.size()][s2.size()] << endl;
	return 0;
}
