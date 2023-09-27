#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;


#define min(a, b) ((a) < (b) ? (a) : (b))

int N;
const int MAX_N = 110;
const int INF = 0x3fffffff;
int A[MAX_N];
int B[MAX_N];
int dp[MAX_N][MAX_N];

void init() {
    for(int i = 0; i < N; ++i)
        scanf("%d%d",&A[i], &B[i]);
    for(int i = 0 ;i < N; ++i)
        for(int j = 0; j < N; ++j)
            dp[i][j] = INF;
    for(int i = 0; i < N; ++i)
        dp[i][i] = 0;
}

int solve() {
    for(int k = 1; k < N; ++k) {
        for(int i = 0; i < N - k; ++i) {
            for(int j = i; j < i + k; ++j) {
                int sz = A[i] * B[j] * B[i + k];
                dp[i][i + k] = min(dp[i][i + k],dp[i][j] + dp[j+1][i + k] + sz);
            }
        }
    }
    // for(int i = 0; i < N; ++i) {                                                                                                                                              
    //  for(int j = 0; j < N; ++j)                                                                                                                                               
    //      printf("%d ", dp[i][j]);                                                                                                                                             
    //  printf("\n");                                                                                                                                                            
    // }                                                                                                                                                                         
    return dp[0][N - 1];
}

int main() {
    while(scanf("%d",&N) == 1) {
        init();
        printf("%d\n", solve());
    }
    return 0;
}