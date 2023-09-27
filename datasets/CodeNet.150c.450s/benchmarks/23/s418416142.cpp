#include <iostream>

int main()
{
    constexpr int N = 45;
    
    int dp[N] {};
    
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i = 2; i < N; ++i)
        dp[i] = dp[i-1] + dp[i-2];
    
    int n;
    std::cin >> n;
    std::cout << dp[n] << std::endl;
    
    return 0;
}
