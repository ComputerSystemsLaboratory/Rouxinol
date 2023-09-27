#include <stdio.h>
#include <stack>
#include <math.h>

using namespace std;

int main(){

	int n,table[200];
	int* dp = new int[1000000];
	int* odd_dp = new int[1000000];

	for(int i=0; i < 200; i++)table[i] = i*(i+1)*(i+2)/6;

	for(int i=0; i < 1000000; i++){
		odd_dp[i] = 20000000;
		dp[i] = 20000000;
	}

	dp[0] = 0;
	dp[1] = 1;

	for(int i = 2; i < 1000000; i++){
		for(int k = 1; table[k] <= i; k++){
			dp[i] = (dp[i] <= dp[i-table[k]]+1)?dp[i]:dp[i-table[k]]+1;
		}
	}

	odd_dp[0] = 0;
	odd_dp[1] = 1;

	for(int i = 2; i < 1000000; i++){
		for(int k = 1; table[k] <= i; k += 2){
			if(table[k]%2 == 1){
				odd_dp[i] = (odd_dp[i] <= odd_dp[i-table[k]]+1)?odd_dp[i]:odd_dp[i-table[k]]+1;
			}
		}
	}

	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		printf("%d %d\n",dp[n],odd_dp[n]);
	}

    return 0;
}