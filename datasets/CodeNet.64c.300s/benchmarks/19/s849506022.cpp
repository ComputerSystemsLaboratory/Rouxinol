#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while(cin>>n,n)
	{
		int data[n],dp[n+1];
		int tmp=0,ans;
		for (int i = 0; i < n; ++i)
		{
			cin>>data[i];
		}
		dp[0]=data[0];
		for (int i = 1; i < n; ++i)
		{
			dp[i]=max(dp[i-1]+data[i],data[i]);
		}
		sort(dp,dp+n);
		cout<<dp[n-1]<<endl;
	}
	return 0;
}