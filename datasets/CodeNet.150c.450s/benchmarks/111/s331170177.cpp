#include <iostream>
#include <algorithm>

constexpr int MAX_N = 100;
long N, dp[MAX_N + 1][21];
int num[MAX_N];

int main(){
    std::cin >> N;
    for(int i = 0; i < N; ++i) {
        std::cin >> num[i];
    }
    dp[0][num[0]] = 1;
    
    for(int i = 0; i < N - 2; ++i) {
        for(int j = 0; j <= 20; ++j) {
            if(j + num[i + 1] <= 20) dp[i + 1][j] += dp[i][j + num[i + 1]];
            if(j - num[i + 1] >= 0) dp[i + 1][j] += dp[i][j - num[i + 1]];
        }
    }
    
    std::cout << dp[N - 2][num[N - 1]] << std::endl;
    
    return 0;
}