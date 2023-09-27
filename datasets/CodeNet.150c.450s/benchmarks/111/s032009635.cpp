#include <iostream>
#include <vector>

#define MAX 20

int main(){
	int count;
	std::cin >> count;
	//dp[計算した回数][計算したとこまでの合計]を宣言する
	std::vector<std::vector<unsigned long long int>> dp(count - 1);
	for(int i = 0; i < count - 1; ++i){
		dp[i].resize(MAX + 1, 0);
	}
	int num;
	std::cin >> num;
	//最初はそのまま入れる
	dp[0][num] = 1;
	for(int i = 1; i < count - 1; ++i){
		std::cin >> num;
		//条件から三つに分ける
		for(int sum = 0; sum < num; ++sum){
			dp[i][sum + num] += dp[i - 1][sum];
		}
		for(int sum = num; sum <= MAX - num; ++sum){
			dp[i][sum + num] += dp[i - 1][sum];
			dp[i][sum - num] += dp[i - 1][sum];
		}
		for(int sum = MAX - num + 1; sum <= MAX; ++sum){
			dp[i][sum - num] += dp[i - 1][sum];
		}
	}
	
	std::cin >> num;
	std::cout << dp[count - 2][num] << std::endl;
	
	return 0;
}
	