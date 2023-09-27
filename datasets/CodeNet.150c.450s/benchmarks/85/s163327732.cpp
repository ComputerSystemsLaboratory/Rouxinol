#include <stdio.h>

int n;
int r[100], c[100];
int dp[101][101];

int main(void)
{
	int i, j, w, m;
	
	for (i = 0; i < 101; i++){
		for (j = 0; j < 101; j++){
			dp[i][j] = 1 << 28;
		}
	}
	for (i = 0; i < 100; i++){
		dp[i][i + 1] = 0;
	}
	
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d %d", &r[i], &c[i]);
	}
	
	for (w = 2; w <= n; w++){
		for (i = 0; i + w <= n; i++){
			for (m = i + 1; m < i + w; m++){
				if (dp[i][i + w] > dp[i][m] + dp[m][i + w] + r[i] * r[m] * c[i + w - 1]){
					dp[i][i + w] = dp[i][m] + dp[m][i + w] + r[i] * r[m] * c[i + w - 1];
				}
			}
		}
	}
	
	printf("%d\n", dp[0][n]);
}