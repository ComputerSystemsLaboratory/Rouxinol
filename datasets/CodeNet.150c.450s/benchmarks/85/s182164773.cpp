#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#define NUM 100
#define INF 1000000000

int X_dim[NUM];
int Y_dim[NUM];
int M[NUM][NUM];

void init(){
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            if(i == j){
                M[i][j] = 0;
            }else{
                M[i][j] = INF;
            }
        }
    }

}

int main(void){
    init();

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &X_dim[i], &Y_dim[i]);
    }

    for(int k = 1; k <= n - 1; k++){
        for(int x = 0; x + k <= n - 1; x++){
            for(int t = x; t <= x + k - 1; t++){
                M[x][x + k] = min(M[x][x + k], M[x][t] + M[t + 1][x + k] + X_dim[x] * Y_dim[t] * Y_dim[x + k]);
                // printf("M[%d][%d]: M[%d][%d] + M[%d][%d] + %d * %d * %d\n", x, x + k, x,t,t+1,x+k,X_dim[x],Y_dim[t],Y_dim[x+k]);
            }
        }
    }

    printf("%d\n", M[0][n - 1]);
}

