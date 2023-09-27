#include <iostream>
#include <algorithm>
#include <cstring>

constexpr int MAX = 1010;

int levenshtein_distance(char* s, char* t,
                         int incost = 1, int rmcost = 1, int recost = 1)
{
    int N = strlen(s), M = strlen(t);
    int dp[N + 1][M + 1];

    for (int i = 0; i <= N; i++) {
        dp[i][0] = i * incost;
    }
    
    for (int i = 0; i <= M; i++) {
        dp[0][i] = i * rmcost;
    }
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            int rcost = (s[i - 1] == t[j - 1] ? 0 : recost);
            dp[i][j] = std::min(dp[i - 1][j] + incost,
                       std::min(dp[i][j - 1] + rmcost, dp[i - 1][j - 1] + rcost));
        }
    }
    return dp[N][M];
}

int main()
{
    char s[MAX], t[MAX];
    std::cin >> s >> t;
    std::cout << levenshtein_distance(s, t) << std::endl;
    return 0;
}