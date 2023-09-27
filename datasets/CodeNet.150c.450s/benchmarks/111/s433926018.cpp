#include <cstdio>

constexpr int MAX_N = 300;
constexpr int MAX_NUM = 20;

int main(){
    int N, num[MAX_N], result;
    long dp[MAX_N][MAX_NUM + 1]{};
    scanf("%d", &N); --N;
    for(int i = 0; i < N; ++i){
        scanf("%d", &num[i]);
    }
    scanf("%d", &result);
    dp[0][num[0]] = 1;
    for(int i = 1; i < N; ++i){
        for(int j = 0; j <= MAX_NUM; ++j){
            if(j >= num[i]){
                dp[i][j] += dp[i - 1][j - num[i]];
            }
            if(j + num[i] <= MAX_NUM){
                dp[i][j] += dp[i - 1][j + num[i]];
            }
        }
    }
    printf("%ld\n", dp[N - 1][result]);
    /*
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < 21; ++j){
            printf("dp[%d][%d]: %ld\n", i, j, dp[i][j]);
        }
    }
    */
    return 0;
}