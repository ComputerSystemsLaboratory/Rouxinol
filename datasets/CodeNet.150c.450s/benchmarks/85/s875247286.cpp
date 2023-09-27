#include<cstdio>
using namespace std;
const char N_MAX = 105;
int INF = 1<<30;
int dp[N_MAX][N_MAX];
char matrix[N_MAX];
int n;
int solve() {
    for(char offset = 1; offset < n; offset++) {
        for(char c = 1, r = c + offset; r <= n; c++, r++) {
            dp[c][r] = INF;
            for(char divid = 1; divid <= offset; divid ++) {
                int newValue = dp[c][c - 1 + divid] + dp[c + divid][r] + matrix[c - 1] * matrix[r] * matrix[c + divid - 1];
                if(newValue < dp[c][r])
                    dp[c][r] = newValue;
            }
        }
    }
    return dp[1][n];
}
int main(){
    scanf("%d", &n);
    for(char i=0;i<n;i++) scanf("%d %d", &matrix[i], &matrix[i+1]);
    printf("%d\n", solve());
    return 0;
}

