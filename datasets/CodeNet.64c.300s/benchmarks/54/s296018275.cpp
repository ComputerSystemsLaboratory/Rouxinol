#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	long long dp[101][40];
	memset(dp, 0, sizeof(dp));
	int n, a[101];
	cin>>n;
	for (int i=1; i<=n; i++) cin>>a[i];
	dp[1][a[1]+10]=1;
	for (int i=1; i<n-1; i++)
	{
		for (int j=10; j<=30; j++)
		{
			dp[i+1][j+a[i+1]]+=dp[i][j];
			dp[i+1][j-a[i+1]]+=dp[i][j];
		}
	}
	cout<<dp[n-1][a[n]+10]<<endl;
	
	return 0;
}


