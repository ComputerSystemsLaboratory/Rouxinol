#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#define N_MAX 50000
#define M_MAX 20
#define NIL 1000000000

int DP[N_MAX + 1][M_MAX + 1];
int C[M_MAX + 1];

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= m; i++){
        scanf("%d", &C[i]);
    }
    
    for(int i = 0; i <= n; i++){
        for(int k = 0; k <= m; k++){
            DP[i][k] = NIL;
        }
    }
    for(int k = 0; k <= m; k++){
        DP[0][k] = 0;
    }

    for(int k = 1; k <= m; k++){
        for(int i = 0; i <= n; i++){
            if(i - C[k] < 0){
                DP[i][k] = DP[i][k - 1];
            }else{
                DP[i][k] = min(DP[i][k - 1], DP[i - C[k]][k] + 1);
            }
            //printf("DP[%d][%d]: %d\n", i, k, DP[i][k]);
        }
    }

    printf("%d\n", DP[n][m]);
}

