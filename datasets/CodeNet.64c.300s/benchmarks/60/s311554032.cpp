#include<stdio.h>

int main(void){
	while(1){
		int a,b,m;
		scanf("%d%d",&a,&b);
		if(a==0&&b==0)break;
		scanf("%d",&m);
		
		int masu[20][20]={0};
		for(int i=0;i<m;i++){
			int aa,bb;
			scanf("%d%d",&aa,&bb);
			masu[aa][bb]=1;
		}
		
		int dp[20][20]={0};
		dp[1][1]=1;
		
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
				if(masu[i+1][j]==0) dp[i+1][j]+=dp[i][j];
				if(masu[i][j+1]==0) dp[i][j+1]+=dp[i][j];
			}
		}
		
		printf("%d\n",dp[a][b]);
	}
}