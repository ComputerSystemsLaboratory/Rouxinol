#include<stdio.h>
#include<string.h>

int main(){
	int a, b, n, x, y;
	while (scanf("%d%d", &a, &b), a){
		int dp[17][17];
		bool p[17][17];
		memset(dp, 0, sizeof(dp));
		memset(p, 0, sizeof(p));
		scanf("%d",&n);
		for (int i = 0; i < n; i++){
			scanf("%d%d", &x, &y);
			p[x][y] = true;
		}
		dp[1][1] = 1;
		for (int i = 1; i <= a; i++){//y??§?¨?
			for (int j = 1; j <= b; j++){//x??§?¨?
				if (i == 1 && j == 1)continue;
				if (!p[i][j])
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
		printf("%d\n", dp[a][b]);
	}
	return 0;
}