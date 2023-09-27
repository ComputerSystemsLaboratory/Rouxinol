#include <stdio.h>
#include <iostream>
using namespace std;

#define N_MAX 100
#define W_MAX 10000

int v_i[N_MAX + 1];
int w_i[N_MAX + 1];
int dp[N_MAX + 1][W_MAX + 1];

int main(void){
    int N, W;
    scanf("%d %d", &N, &W);

    for(int i = 1; i <= N; i++){
        scanf("%d %d", &v_i[i], &w_i[i]);
    }

    for(int i = 0; i <= N; i++){
        dp[i][0] = 0;
    }
    for(int j = 0; j <= W; j++){
        dp[0][j] = 0;
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= W; j++){
            if(j - w_i[i] < 0){
                dp[i][j] = dp[i - 1][j];
            }else{
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w_i[i]] + v_i[i]);
            }
        }
    }

    printf("%d\n", dp[N][W]);
}

