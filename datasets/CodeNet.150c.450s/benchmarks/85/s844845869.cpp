//
//  main.cpp
//  matrix_chain_multiplication
//
//  Created by ???????????? on 2017/10/17.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#define INFTY (1 << 21)


using namespace std;

int p[110];

void matrixChainMultiplication(int n){
    int m[n+1][n+1];
    for (int i = 1; i <= n; i++) m[i][i] = 0;
    
    for(int l = 2; l <= n; l++){
        for(int i = 1; i <= (n-l+1); i++){
            int j = i + l - 1;
            m[i][j] = INFTY;
            for(int k = i; k <= (j-1); k++){
                m[i][j] = min(m[i][j], m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]);
            }
        }
    }
    cout << m[1][n] << endl;
}


int main(int argc, const char * argv[]) {
    int n, i, pi, pi_1;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d", &pi, &pi_1);
        if(i) p[i+1] = pi_1;
        else {
            p[0] = pi;
            p[1] = pi_1;
        }
    }
    matrixChainMultiplication(n);
//    std::cout << "Hello, World!\n";r
    return 0;
}