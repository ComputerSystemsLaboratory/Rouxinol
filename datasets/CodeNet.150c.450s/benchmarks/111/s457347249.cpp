#include <iostream>

int main(){
	int n,nums[100];
	std::cin >> n;
	for(int i=0;i<n;i++){
		std::cin >> nums[i];
	}
	unsigned long long int dp[100][21] = {0};
	dp[0][nums[0]] = 1;
	for(int j=1;j<n-1;j++){
		for(int k=0;k<21;k++){
			if(dp[j-1][k] > 0){
				if(k+nums[j] <= 20)
					dp[j][k+nums[j]] += dp[j-1][k];
				if(k-nums[j] >= 0)
					dp[j][k-nums[j]] += dp[j-1][k];
			}
		}
	}
	std::cout << dp[n-2][nums[n-1]] << std::endl;
}