#include <iostream>
#include <vector>

int main(){
	long long dp[21][100] = {};
	std::vector<int> numbers;
	int num,x;

	std::cin >> num;

	for(int i=0; i<num; ++i){
		std::cin >> x;
		numbers.push_back(x);
	}

	dp[numbers.at(0)][0] = 1; //first step

	for(int i=1; i<num-1; ++i){
		
		for(int j=numbers.at(i); j<21; ++j){ //0 < j - numbers.at(i)
			dp[j-numbers.at(i)][i] += dp[j][i-1];
		}

		for(int j=0; j<21-numbers.at(i); ++j){ //j + numbers.at(i) < 21
			dp[j+numbers.at(i)][i] += dp[j][i-1];
		}

	}

	std::cout << dp[numbers.at(num-1)][num-2] << std::endl; //n-2 = (n-1)-1
}