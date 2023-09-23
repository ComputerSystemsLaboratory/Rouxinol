#include<stdio.h>
int main(void)
{
	int n;
	int a;
	int i,j;
	long long int dp[101][105];
	scanf("%d",&n);
	for(j=0;j<=n;j++){
		for(i=0;i<101;i++){
			dp[j][i]=0;
		}
	}
	scanf("%d",&a);
	dp[0][a]=1;
	for(i=0;i<n-1;i++){
		scanf("%d",&a);
		for(j=0;j<=20;j++){
			dp[i+1][j+a]+=dp[i][j];
			dp[i+1][j-a]+=dp[i][j];
		}
	}/*
	for(i=0;i<n-1;i++){
		printf("%d=",i);
		for(j=1;j<=20;j++){
			printf("%d=%lld ",j,dp[i][j]);
		}
		printf("\n");
		printf("\n");
	}*/
	scanf("%d",&a);
	long long int cnt=0;
	cnt=dp[n-2][a];
	printf("%lld\n",cnt);
	return 0;
}