#include <stdio.h>
#include <iostream>
#define INFTY 200000000
using namespace std;

int main(void){
    int n;
    int m[100][100];
    int p[101];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &p[i]);
        scanf("%d", &p[i + 1]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i > j)
                m[i][j] = INFTY;
            if(i == j) 
                m[i][j] = 0;
        }
    }
    
    for(int i = 0; i <= n - 2; i++){
        m[i][i + 1] = p[i] * p[i + 1] * p[i + 2];
    }

    for(int k = 2; k <= n - 1; k++){
        for(int i = 0; i + k <= n - 1; i++){
            m[i][i + k] = INFTY;
            for(int t = 0; t + 1 <= k; t++){
                m[i][i + k] = min(m[i][i + t] + m[i + t + 1][i + k] + p[i] * p[i + t + 1] * p[i + k + 1], m[i][i + k]);
            }
        }
    }

    printf("%d\n", m[0][n - 1]);

}

