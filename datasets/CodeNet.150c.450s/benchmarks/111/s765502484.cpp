#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <queue>

#define INF (1e+9)
#define LLINF (1e+18)
#define LL long long

using namespace std;

int num;
int array[128];
LL dp[128][32] = {0};


int main (void){

	for(int i=0;i<128;i++){
		for(int j=0;j<32;j++){
			dp[i][j] = 0;
		}
	}
	dp[0][0] = 1;

	scanf("%d",&num);
	for(int i=0;i<num;i++){
		scanf("%d",array+i);
	}
	

	for(int i=0;i<num-1;i++){
		for(int j=0;j<21;j++){
			if(dp[i][j] != 0){
				if(j + array[i] <= 20){
					dp[i+1][j + array[i]] += dp[i][j];
				}
				if(j - array[i] >= 0){
					if(i != 0)dp[i+1][j - array[i]] += dp[i][j];
				}
			}
		}
	}
	/*for(int i=0;i<=20;i++){
		for(int j=0;j<4;j++){
			printf("%lld\t",dp[j][i]);
		}
		printf("\n");
	}
	printf("###%lld\n",dp[0][0]);*/

	printf("%lld\n",dp[num-1][array[num - 1]]);



	return 0;
}