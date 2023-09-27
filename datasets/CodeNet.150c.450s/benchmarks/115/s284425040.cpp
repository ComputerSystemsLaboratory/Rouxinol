#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int kMax = 1000 + 10;

char a_str[kMax], b_str[kMax];
int dp[kMax][kMax];

int main() {
    int q;
    scanf("%d", &q);
    while(q --) {
        scanf("%s%s", a_str, b_str);
        int n = strlen(a_str), m = strlen(b_str);
        for(int i = 0;i < n;++ i) {
            for(int j = 0;j < m;++ j) {
                if(a_str[i] == b_str[j]) dp[i][j] = (i && j ? (dp[i-1][j-1] + 1) : 1);
                else dp[i][j] = max(i ? dp[i-1][j] : 0, j ? dp[i][j-1] : 0);
            }
        }
        printf("%d\n", dp[n-1][m-1]);
    }
    return 0;
}