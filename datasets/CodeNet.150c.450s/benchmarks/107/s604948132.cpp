#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

int idx1, idx2;
std::string s1, s2;
unsigned int dp[1010][1010];

int main() {
    std::cin >> s1 >> s2;
    
    memset(dp, -1, sizeof(dp));
    dp[0][0] = 0;
    for(unsigned int i = 0; i <= s1.size(); ++i) {
        for(unsigned int j = 0; j <= s2.size(); ++j) {
            if(s1.size() == i && s2.size() == j)
                break;
            
            if(s1[i] == s2[j]) {
                dp[i + 1][j + 1] = std::min(dp[i + 1][j + 1], dp[i][j]);
            }else if(i != s1.size() && j != s2.size()){
                dp[i + 1][j + 1] = std::min(dp[i + 1][j + 1], dp[i][j] + 1);
            }
            
            if(i != s1.size()) {
                dp[i + 1][j] = std::min(dp[i + 1][j], dp[i][j] + 1);
            }
            if(j != s2.size()) {
                dp[i][j + 1] = std::min(dp[i][j + 1], dp[i][j] + 1);
            }
        }
    }
    std::cout << dp[s1.size()][s2.size()] << std::endl;
}