#include <stdio.h>

int main(void)
{
	int n;
	int s;
	int i, j, k;
	int dp[16][64];	
	
	for (i = 0; i < 16; i++){
		for (j = 0; j < 64; j++){
			dp[i][j] = 0;
		}
	}
	
	dp[0][0] = 1;
	for (i = 0; i <= 9; i++){
		for (j = 8; j >= 0; j--){
			for (k = 0; k < 64; k++){
				if (dp[j][k] != 0){
					dp[j + 1][k + i] += dp[j][k];
				}
			}
		}
	}
	
	while (scanf("%d %d", &n, &s), n != 0 || s != 0){
		if (s < 64){
			printf("%d\n", dp[n][s]);
		}
		else {
			printf("0\n");
		}
	}
	
	return (0);
}