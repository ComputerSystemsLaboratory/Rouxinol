#include<stdio.h>
int dp[10002][10002];
int main(void)
{
	int n,w;
	int v,x;
	int i,j;
	int max=0;
	
	scanf("%d %d",&n,&w);
	for(i=0;i<=n;i++){
		for(j=0;j<=w;j++){
			dp[i][j]=-1;
		}
	}
	dp[0][0]=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&v,&x);
		for(j=0;j<=w;j++){
			if(dp[i][j]!=-1){
				if(dp[i+1][j]<dp[i][j]){
					dp[i+1][j]=dp[i][j];
				}
				if(j+x<=w && dp[i+1][j+x]<dp[i][j]+v){
					dp[i+1][j+x]=dp[i][j]+v;
				}
			}
		}
	}
	for(i=0;i<=w;i++){
		if(max<dp[n][i]){
			max=dp[n][i];
		}
	}
	printf("%d\n",max);
	return 0;
}