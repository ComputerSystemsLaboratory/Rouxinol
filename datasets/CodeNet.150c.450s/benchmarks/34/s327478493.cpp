#include<stdio.h>

int main(void){
	int n;
	while(scanf("%d", &n) && n ){
		
		int dp[100]={0};
		dp[0] = 1;
		
		for(int i = 0; i < n; i++){
			dp[i+3] += dp[i];
			dp[i+2] += dp[i];
			dp[i+1] += dp[i];
		}
		printf("%d\n",dp[n]/3650+1);
	}
	return 0;
}