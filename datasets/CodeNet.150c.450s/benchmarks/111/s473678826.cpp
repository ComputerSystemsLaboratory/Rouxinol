#include <iostream>
#include <vector>
 
int main() {
 
    std::vector<int> a;
    std::vector<std::vector<long long int>> dp;
    int n;
 
    dp.resize(200);
 
    for (int i = 0; i < 200; ++i) {
        dp[i].resize(21);
    }
 
    for (int i = 0; i < 200; ++i) {
        for (int j = 0; j < 21; ++j) {
            dp[i][j] = 0;
        }
    }
 
    std::cin >> n;
 
    for (int i = 0; i < n; ++i){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
 
    //std::cin >> b;
    //dp[0][0] = 1;
	dp[1][a[0]] = 1;
 
    for (int i = 1; i < n-1; ++i){
 
        /*
        if (i == 0) {
            for (int j = 0; j < 21; ++j) {
                dp[0][j] = 1;
            }
        }*/
 
        for (int j = 0; j < 21; ++j) {
 
            if (dp[i][j] != 0 && j + a[i] < 21) {
                dp[i + 1][j+a[i]] += dp[i][j];
            }
 
            if (dp[i][j] != 0 && 0 <= j - a[i]) {
                dp[i + 1][j-a[i]] += dp[i][j];
            }
 
        }
 
    }
	// n-1?????§????¨?????????????a[n-1](=n)??§???????????°
    std::cout << dp[n-1][a[n-1]] << std::endl;
	/*
	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < 10; ++j){
			std::cout << i << ":" << j << "|" << dp[i][j] << std::endl;
		}
	}
	*/
 
    return 0;
}