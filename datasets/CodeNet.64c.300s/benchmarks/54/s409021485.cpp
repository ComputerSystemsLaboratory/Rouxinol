#include <string.h>
#include <stdio.h>

long long dp[100][21];
int n;
int nums[100];

long long calc(int now, int sum){
	if (now == n - 1){
		return sum == nums[now];
	}
	if (sum < 0 || 20 < sum){
		return 0;
	}
	if (~dp[now][sum]){
		return dp[now][sum];
	}

	long long res = calc(now + 1, sum + nums[now]) + !!(now)* calc(now + 1, sum - nums[now]);

	return dp[now][sum] = res;
}

int main(){
	memset(dp, -1, sizeof(dp));
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &nums[i]);
	}
	printf("%lld\n", calc(0, 0));
	return 0;
}