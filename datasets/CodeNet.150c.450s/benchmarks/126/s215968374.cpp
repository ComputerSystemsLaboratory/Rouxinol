#include <cstdio>

#define max(a,b) (a > b ? a : b)
int a,b,n,dp[17][17];

int main(){
	while(scanf("%d%d",&a,&b), a != 0){
		scanf("%d",&n);
		for(int i = 0; i < 17; i++){
			for(int j = 0; j < 17; j++){
				dp[i][j] = 0;
			}
		}

		for(int i = 0; i < n; i++){
			int x,y;
			scanf("%d%d",&x,&y);
			dp[x][y] = -1;
		}

		dp[1][1] = 1;
		for(int i = 1; i <= a; i++){
			for(int j = 1; j <= b; j++){
				if(i != 1 || j != 1){
					if(dp[i][j] != -1){
						dp[i][j] = max(dp[i-1][j],0) + max(dp[i][j-1],0);
					}
				}
			}
		}
		printf("%d\n",dp[a][b]);
	}
	return 0;
}