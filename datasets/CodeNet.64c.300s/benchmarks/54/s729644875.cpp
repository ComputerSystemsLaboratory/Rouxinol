#include<cstdio>
#include<queue>
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<map>
#include<cmath>

using namespace std;

int N,d[100];
long long int dp[100][21] = {};

long long int ans(int n, int sum){
	if (sum > 20 || sum < 0)return 0;
	if (dp[n][sum] > 0)return dp[n][sum];
	if (n == N - 1){
		if (sum == 0)return 1;
		else return 0;
	}
	long long int ret = 0;
	ret = ans(n + 1, sum + d[n + 1]) + ans(n + 1, sum - d[n + 1]);
	return dp[n][sum]=ret;
}

int main(){
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d", &d[i]);
	}
	printf("%lld\n", ans(0, d[0]));
	return 0;
}