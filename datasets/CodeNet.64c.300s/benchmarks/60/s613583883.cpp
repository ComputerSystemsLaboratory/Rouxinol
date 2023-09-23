#include<stdio.h>
int main(void)
{
    int a,b,n,x,y,i,j,dp[101][101];
	while(1){
		scanf("%d%d",&a,&b);
		if(a==0&&b==0) break;
		scanf("%d",&n);
		for(i=1;i<=a;i++){
			for(j=1;j<=b;j++){
				dp[i][j]=0;
			}
		}
		for(i=1;i<=n;i++){
			scanf("%d%d",&x,&y);
			dp[x][y]=-1;
		}
		dp[1][1]=1;
		for(i=1;i<=a;i++){
			for(j=1;j<=b;j++){
				if(dp[i][j]!=-1){
					if(dp[i+1][j]==0&&i<=a){
						dp[i+1][j]=dp[i][j];
					}
					if(dp[i][j+1]!=-1&&j<=b){
						dp[i][j+1]=dp[i][j]+dp[i][j+1];
					}
				}
			}
		}
		printf("%d\n",dp[a][b]);
	}
    return 0;
}