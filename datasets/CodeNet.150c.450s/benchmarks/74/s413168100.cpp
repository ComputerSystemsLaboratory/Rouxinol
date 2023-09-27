#include <iostream>
#include "string.h"
int a[27];
int dp[50007];
using namespace std;
int main() {
	int n,k;
	cin>>k>>n;
	memset(dp, 0, sizeof(dp));
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=50007;i++)dp[i]=1e9;
	dp[0]=0;
	for(int i=1;i<=n;i++)
		for(int j=0;j+a[i]<=k;j++)
			dp[j+a[i]]=min(dp[j+a[i]],dp[j]+1);
	cout<<dp[k]<<endl;
}
