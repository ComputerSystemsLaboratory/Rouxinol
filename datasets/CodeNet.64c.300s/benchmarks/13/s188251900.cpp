#include <cstdio>
#include <algorithm>
using namespace std;
int n,dp[50];
int main()
{
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=50;i++){
		dp[i]=dp[i-2]+dp[i-1];
	}
	scanf("%d",&n);
	printf("%d\n",dp[n]);
	return 0;
}