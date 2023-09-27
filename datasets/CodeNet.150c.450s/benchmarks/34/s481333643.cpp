#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int main(){
	int dp[31];
	dp[0] = 1;
	dp[1] = 1;
	for(int i=2;i<31;i++){
		dp[i] = 0;
		for(int j=1;j<=3;j++){
			if(i-j<0)break;
			dp[i] += dp[i-j];
		}
	}
	for(int i=0;i<31;i++){
		dp[i] = (dp[i]+3649)/3650;
	}
	while(true){
		int x;
		scanf("%d",&x);
		if(x==0)break;
		printf("%d\n",dp[x]);
	}
	return 0;
}