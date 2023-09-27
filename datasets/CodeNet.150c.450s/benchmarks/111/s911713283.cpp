#include <iostream>
#include <vector>

int main(){
	const int MAX = 20;
	const int MIN = 0;
	
	int num;
	std::cin >> num;

	std::vector< std::vector<long long int> > dp((num - 1), std::vector<long long int>((MAX + 1), 0));
	int value;
	std::cin >> value;
	dp[0][value] = 1;
	for(int i = 0; i < (num - 2); ++i){
		std::cin >> value;
		for(int j = 0; j <= MAX; ++j){
			if((j + value) <= MAX){
				dp[i + 1][j] += dp[i][j + value];
			}
			if((j - value) >= MIN){
				dp[i + 1][j] += dp[i][j - value];
			}
		}
	}
	std::cin >> value;
	std::cout << dp[num - 2][value] << std::endl;
	return 0;
}