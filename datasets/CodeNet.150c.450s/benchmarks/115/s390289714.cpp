#include <stdio.h>
#include <string.h>
#define N 1010
char a[N];
char b[N];
int dp[N][N];
//int LCS(int i, int j){
//    if(i == -1 || j == -1) return 0;
//    if(a[i] == b[j]) return LCS(i-1, j-1) + 1;
//    else return LCS(i-1, j) > LCS(i, j-1) ? LCS(i-1, j) : LCS(i, j-1);
//}
int main(){
    int k;
    scanf("%d", &k);
    while(k--){
        scanf("%s", a);
        scanf("%s", b);
        int n = strlen(a);
        int m = strlen(b);
        for(int i = n-1; i >= 0; i--) a[i+1] = a[i];
        for(int i = m-1; i >= 0; i--) b[i+1] = b[i];
        int max = n > m ? n : m;
        for(int i = 0; i <= max; i++) dp[0][i] = dp[i][0] = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1;
                else {
                    dp[i][j] = dp[i-1][j] > dp[i][j-1] ? dp[i-1][j] : dp[i][j-1];
                }
            }
        }
        printf("%d\n", dp[n][m]);
        //printf("%d\n", LCS(strlen(a)-1, strlen(b)-1));
    }
    return 0;
}
