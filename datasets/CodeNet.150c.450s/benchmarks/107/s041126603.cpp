#include <iostream>
#include <vector>
#include <string>

inline void chmin(int &x, int y) {
    if(x > y) x = y;
}

int main() {
    std::string s, t; std::cin >> s >> t;
    int n = s.size(), m = t.size();
    std::vector<std::vector<int>> dp(n+1, std::vector<int>(m+1, n+m));
    dp[0][0] = 0;
    for(int i = 0; i<n+1;++i) {
        for(int j = 0; j < m+1; ++j) {
            if(i > 0) chmin(dp[i][j], dp[i-1][j] + 1);
            if(j > 0) chmin(dp[i][j], dp[i][j-1] + 1);
            if(i > 0 && j > 0) chmin(dp[i][j], dp[i-1][j-1] + ((s[i-1] == t[j-1])?0:1));
        }
    }
    std::cout << dp[n][m] << std::endl;
}
