#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define INF 0x33433433

int len1;
int len2;
char s1[1001];
char s2[1001];
int dp[1001][1001];

int main() {
    scanf("%s", s1);
    scanf("%s", s2);
    len1 = strlen(s1);
    len2 = strlen(s2);

    for (int i=0; i<=len1; i++) {
        for (int j=0; j<=len2; j++) {
            dp[i][j] = INF;
        }
    }

    for (int i=0; i<=len1; i++) {
        dp[i][0] = i;
    }

    for (int i=0; i<=len2; i++) {
        dp[0][i] = i;
    }

    for (int i=1; i<=len1; i++) {
        for (int j=1; j<=len2; j++) {
            int a = 1;
            if (s1[i-1] == s2[j-1]) a = 0;
            
            dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
            dp[i][j] = min(dp[i][j], dp[i][j-1]+1);
            dp[i][j] = min(dp[i][j], dp[i-1][j-1] + a);
        }
    }

    printf("%d\n", dp[len1][len2]);
}