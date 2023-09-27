#include <bits/stdc++.h>
using namespace std;
const int N = 110, M = 10010;
int n, w[N], v[M], W;
int dp[N][M];//从第i个物品到最后一个（n-1）物品，总重量不超过j的最大价值
int main(){
    scanf("%d %d", &n, &W);
    for(int i = 0; i < n; i++) scanf("%d %d", &v[i], &w[i]);

    for(int j = 0; j <= W; j++) dp[n][j] = 0;
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j <= W; j++){
            if(w[i] > j){
                dp[i][j] = dp[i+1][j];
            }
            else{
                dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]]+v[i]);
            }
        }
    }
    printf("%d\n", dp[0][W]);
    return 0;
}
