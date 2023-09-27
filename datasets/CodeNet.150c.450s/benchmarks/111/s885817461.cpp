#include <iostream>
#include <vector>
 
int main(void) {
    u_int N;	// the number of integer
    std::vector<std::vector<u_long>> dp;
    std::vector<u_int> seq;
    
    std::cin >> N;
    seq.reserve(N);
    dp.resize(N);
    for (u_int i = 0; i < N; ++i) {
        u_int tmp;
        std::cin >> tmp;
        seq.push_back(tmp);
        dp[i].resize(21, 0);
    }
    
    // solve by dp
    dp[0][seq[0]] = 1;  // initialization
    for (u_int i = 1; i < N - 1; ++i) {
        for (u_int j = 0; j < 21; ++j) {
            if (dp[i - 1][j] > 0) {
                if (j + seq[i] <= 20) {
                    dp[i][j + seq[i]] += dp[i - 1][j];
                }
                if (j >= seq[i]) {
                    dp[i][j - seq[i]] += dp[i  -1][j];
                }
            }
        }
    }
    std::cout << dp[N - 2][seq[N - 1]] << std::endl;
 
    return 0;
}