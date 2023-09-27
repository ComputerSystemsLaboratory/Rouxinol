#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

size_t ldistance(string s, string t) {
    /* Levenshtein Distance */
    size_t slen=s.length(), tlen=t.length();
    vector<vector<size_t>> dp(slen+1, vector<size_t>(tlen+1));

    for (size_t i=0; i<=slen; ++i)
        dp[i][0] = i;

    for (size_t j=0; j<=tlen; ++j)
        dp[0][j] = j;

    for (size_t i=1; i<=slen; ++i)
        for (size_t j=1; j<=tlen; ++j) {
            size_t cost=(s[i-1]!=t[j-1]);
            dp[i][j] = min(min(dp[i-1][j], dp[i][j-1])+1, dp[i-1][j-1]+cost);
        }

    return dp[slen][tlen];
}

int main() {
    char buf[1024];
    scanf("%s", buf);
    string s1(buf);

    scanf("%s", buf);
    string s2(buf);

    printf("%zu\n", ldistance(s1, s2));
    return 0;
}