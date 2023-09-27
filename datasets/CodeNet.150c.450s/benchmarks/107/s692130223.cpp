#include <cstdio>
#include <cstring>
#include <algorithm>

constexpr int STR_MAX_LEN = 1000;

int main(){
    char s1[STR_MAX_LEN], s2[STR_MAX_LEN];
    int dp[STR_MAX_LEN + 1][STR_MAX_LEN + 1];
    scanf("%s%s", s1, s2);
    int s1_len = strlen(s1), s2_len = strlen(s2);
    
    for(int i = 1; i <= s1_len; ++i){
        dp[i][0] = i;
    }
    for(int i = 1; i <= s2_len; ++i){
        dp[0][i] = i;
    }

    for(int i = 1; i <= s1_len; ++i){
        for(int j = 1; j <= s2_len; ++j){
            if(s1[i - 1] == s2[j - 1]){
                dp[i][j] = dp[i - 1][j - 1];
            }
            else{
                dp[i][j] = std::min({dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1});
            }
        }
    }
    printf("%d\n", dp[s1_len][s2_len]);
    return 0;
}