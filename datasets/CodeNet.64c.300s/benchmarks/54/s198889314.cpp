#include "stdio.h"

int n;
int a[100];
long long int dp[101][21] = {};//i番目までの数を使ってjをつくるパターン数


int main(){

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	dp[1][a[0]] = 1;

	for(int i=2;i<=n;i++){
		for(int j=0;j<=20;j++){
			if(j+a[i-1]<=20){
				dp[i][j+a[i-1]] += dp[i-1][j];
			}
			if(j-a[i-1]>=0){
				dp[i][j-a[i-1]] += dp[i-1][j];
			}
		}
	}

	printf("%lld\n",dp[n-1][a[n-1]]);


	return 0;
}