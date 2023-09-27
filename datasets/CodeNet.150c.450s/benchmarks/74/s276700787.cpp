#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define MAX 50000
#define INFTY 50000

int Coin[20];
int dp[MAX + 1];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)cin >> Coin[i];
	REP(i, n + 1)
	{
		if (i == 0)dp[i] = 0;
		else dp[i] = INFTY;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = Coin[i]; j <= n; j++)
		{
			dp[j] = min(dp[j], dp[j - Coin[i]] + 1);
		}
	}
	cout << dp[n] << endl; 
	return 0;
}