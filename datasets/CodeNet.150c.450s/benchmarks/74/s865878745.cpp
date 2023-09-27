#include<bits/stdc++.h>
using namespace std;
const int N = 25, M = 50010;
const int INF = 0x3f3f3f3f;
int W, n;
int w[N];
int dp[N][M];//从0到i-1组成j的最少硬币数量
int main(){
    scanf("%d %d", &W, &n);
    for(int i = 0; i < n; i++) scanf("%d", &w[i]);
    for(int j = 0; j <= W; j++) dp[0][j] = INF;
    for(int i = 0; i < n; i++) dp[i][0] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= W; j++){
            if(w[i] > j){
                dp[i+1][j] = dp[i][j];
            }
            else{
                dp[i+1][j] = min(dp[i][j], dp[i+1][j-w[i]] + 1);
            }
        }
    }
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j <= W; j++){
//            dp[i][j] == INF ? printf("INF   ") : printf("%d   ", dp[i][j]);
//            //printf("%s   ", dp[i][j] == INF ? INF : dp[i][j]);
//        }
//        printf("\n");
//    }
    printf("%d\n", dp[n][W]);
    return 0;
}
