#include<iostream>
#include<string>
#include<vector>

using namespace std;

typedef long long ll;
#define rep(i,a) for(int i=0;i<(a);i++)

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	string s1, s2;
	cin >> s1 >> s2;

	vector<vector<ll > > dp(s1.size()+1, vector<ll >(s2.size()+1));

	rep(i, s1.size()+1)
	{
		dp[i][0] = i;
	}
	rep(i, s2.size()+1)
	{
		dp[0][i] = i;
	}

	for (int i = 1; i <= s1.size(); i++)
	{
		for (int j = 1; j <= s2.size(); j++)
		{
			int c;
			c = !(s1[i-1] == s2[j-1]);
			dp[i][j] = min(dp[i - 1][j] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + c));
		}
	}

	cout << dp[s1.size()][s2.size()] << endl;
	return 0;
}
