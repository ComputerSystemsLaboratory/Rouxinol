#include "stdio.h"

#define max(a,b) (a) > (b) ? (a) : (b)

int n;
long long int dp[31] = {};//i段目におけるパターン

long long int ans = 0;

int main(){

	while(1){

		scanf("%d",&n);

		if(n==0) break;

		ans = 0;

		for(int i=0;i<=n;i++){
			dp[i] = 0;	
		}

		dp[0] = 1;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=3;j++){
				if(i-j>=0){
					dp[i] += dp[i-j];
				}
			}
		}

		printf("%d\n",(int)(dp[n]/3650) + 1);

	}

	return 0;
}