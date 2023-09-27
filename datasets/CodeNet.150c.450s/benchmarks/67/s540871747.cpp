#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int main(){

	int checkTable[1001],dp[46][501];

	for(int i = 1; i <= 1000; i++)checkTable[i] = 0;

	for(int i = 1; i <= 500; i++)dp[1][i] = i;

	for(int row = 2; row <= 45; row++){
		for(int col = 1; col <= 501-row; col++){
			dp[row][col] = col + dp[row-1][col+1];
			if(dp[row][col] <= 1000)checkTable[dp[row][col]]++;
		}
	}

	int N;

	while(true){
		scanf("%d",&N);
		if(N == 0)break;

		printf("%d\n",checkTable[N]);
	}
	return 0;
}