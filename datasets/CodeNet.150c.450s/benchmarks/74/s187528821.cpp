#include<stdio.h>
#define MAX 10000000
int dp[21][50001];
int main(void)
{
	int n,m;
	int d[10001];
	int i,j,k;
	
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d",&d[i]);
	}
	for(i=0;i<=m;i++){
		for(j=0;j<=n;j++){
			dp[i][j]=MAX;
		}
	}
	dp[0][0]=0;
	for(i=0;i<m;i++){
		for(j=0;j<=n;j++){
			if(dp[i][j]!=MAX){
				if(dp[i+1][j]>dp[i][j]){
					dp[i+1][j]=dp[i][j];
				}
				if(dp[i][j]+1<dp[i][j+d[i]]){
					dp[i][j+d[i]]=dp[i][j]+1;
				}
			}
		}
	}
	printf("%d\n",dp[m][n]);
	return 0;
}