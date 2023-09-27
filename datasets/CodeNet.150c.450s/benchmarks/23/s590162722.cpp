#include<stdio.h>
int main(void)
{
	int dp[1000]={0};
	int n,i;

	scanf("%d",&n);
	dp[0]=1;
	dp[1]=1;
	for(i=2;i!=n+1;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	printf("%d\n",dp[n]);
}