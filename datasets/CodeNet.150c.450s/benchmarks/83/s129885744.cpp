#include<stdio.h>
int dp[105][10051];
int main(void){
	int n,w;
	int i,j;
	scanf("%d %d",&n,&w);
	for(i=0;i<=n;i++){
		for(j=0;j<=w;j++){
			dp[i][j]=-1;
		}
	}
	dp[0][0]=0;
	for(i=0;i<=n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		for(j=0;j<=w;j++){
			if(dp[i][j]>=0 && dp[i+1][j+b]<dp[i][j]+a && j+b<=w){
				dp[i+1][j+b]=dp[i][j]+a;
			}
		}
		for(j=0;j<=w;j++){
			if(dp[i+1][j]<dp[i][j]){
				dp[i+1][j]=dp[i][j];
			}
		}/*
		for(j=0;j<=w;j++){
			printf("%d ",dp[i][j]);
		}
		printf("\n");*/
	}
	int max=0;
	for(j=0;j<=w;j++){
		if(dp[n][j]>max){
			max=dp[n][j];
		}
	}
	printf("%d\n",max);
	return 0;
}