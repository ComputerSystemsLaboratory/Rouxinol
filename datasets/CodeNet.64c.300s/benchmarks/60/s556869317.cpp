#include <stdio.h>

int main(void){
	int a,b,n,i,j,x,y;
	
	while(scanf("%d%d",&a,&b),a,b){
		int dp[20][20]={0};
		int koji[20][20]={0};
		
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d%d",&x,&y);
			koji[x][y]=1;
		}
		
		dp[0][1]=1;
		
		for(i=1;i<=a;i++){
			for(j=1;j<=b;j++){
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
				if(koji[i][j]==1)dp[i][j]=0;
			}
		}
		printf("%d\n",dp[a][b]);
	}
	return 0;
}