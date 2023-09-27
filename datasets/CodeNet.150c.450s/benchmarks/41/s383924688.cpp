#include <stdio.h>
#include <iostream>
using namespace std;

#define NUM 100
#define INF 100000000000
int v_num, e_num;
long long V[NUM][NUM];
long long A[NUM][NUM];

void wardhallFloyd(){
    for(int i = 0; i < v_num; i++){
        for(int j = 0; j < v_num; j++){
            A[i][j] = V[i][j];
        }
    }

    for(int k = 0; k < v_num; k++){
        for(int i = 0; i < v_num; i++){
            for(int j = 0; j < v_num; j++){
                if(A[i][k] != INF && A[k][j] != INF){
                    A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
                }
                //printf("A[%d][%d]: %lld\n", i, j, A[i][j]);
            }
        }
    }
}

void init(){
    for(int i = 0; i < v_num; i++){
        for(int j = 0; j < v_num; j++){
            if(i == j){
                V[i][j] = 0;
            }else{
                V[i][j] = INF;
            }
        }
    }
}

bool is_negative(){
    for(int i = 0; i < v_num; i++){
        if(A[i][i] < 0){
            return true;
        }
    }
    return false;
}

void printA(int i, int j){
    if(A[i][j] == INF){
        printf("INF");
    }else{
        printf("%lld", A[i][j]);
    }
}

int main(void){
    scanf("%d", &v_num);
    scanf("%d", &e_num);

    init();

    for(int i = 0; i < e_num; i++){
        long long s, t, d;
        scanf("%lld", &s);
        scanf("%lld", &t);
        scanf("%lld", &d);
        V[s][t] = d;
    }

    wardhallFloyd();

    if(is_negative()){
        printf("NEGATIVE CYCLE\n");
        return 0;
    }

    for(int i = 0; i < v_num; i++){
        for(int j = 0; j < v_num; j++){
            if(j == v_num - 1){
                printA(i, j);
                printf("\n");
            }else{
                printA(i, j);
                printf(" ");
            }
        }
    }
}

