#include <iostream>
#include <string>

using namespace std;

int lcs(const string& x, const string& y)
{
	int n = x.size();
	int m = y.size();

	int dp[n+1][m+1];
	for (int i = 0; i < n+1; i++)
		dp[i][0] = i;

	for (int j = 0; j < m+1; j++)
		dp[0][j] = j;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int di = dp[i][j-1]+1;
			int dd = dp[i-1][j]+1;

			if (x[i-1] == y[j-1])
				dp[i][j] = min(min(di, dd), dp[i-1][j-1]);
			else
				dp[i][j] = min(min(di, dd), dp[i-1][j-1]+1);
		}
	}

	return dp[n][m];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string x, y;

	cin >> x>> y;
	cout << lcs(x, y) << endl;

	return 0;
}