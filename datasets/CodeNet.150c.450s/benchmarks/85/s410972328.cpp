//
//  main.cpp
//  ALDS1_10_B:MatrixChainMultiplication
//
//  Created by Kang on 2020/8/14.
//  Copyright © 2020 Kang. All rights reserved.
//

#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int p[101];       // 矩阵维数
    int dp[101][101]; // 只用上三角
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &p[i], &p[i+1]);
    }
    // j-i = dif, dif = 0, 1, ..., n - 1
    for (int dif = 0; dif < n; dif++) {     // dif = j - i;
        for (int i = 1; i <= n-dif; i++) {  // i表示行数
            if(dif == 0) {dp[i][i] = 0;}
            else {
                int min = ~(1 << 31);
                int tmp;
                for (int k = i; k < i + dif; k++) {
                    tmp = dp[i][k] + dp[k + 1][i+dif] + p[i-1] * p[k] * p[i + dif];
                   /*printf("dp[%d][%d] + dp[%d][%d] + p[%d] * p[%d] * p[%d] = %d\n",
                          i, k, k+1, i+dif, i-1, k, i+dif, tmp);*/
                    if (tmp < min) min = tmp;
                }
                dp[i][i+dif] = min;
                
                // printf("dp[%d][%d] = %d\n",i, i+dif, min);
                // printf("--------------------\n");
            }
        }
    }
    printf("%d\n", dp[1][n]);
    
    return 0;
}

