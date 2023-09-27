#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

#define N_MAX 100
#define WHITE 1
#define GREY 2
#define BLACK 3
#define INF 1000000000
#define NIL -1

int G[N_MAX][N_MAX];
int V[N_MAX];
int V_value[N_MAX];

void init(void){
    for(int i = 0; i < N_MAX; i++){
        V[i] = WHITE;
        V_value[i] = INF;
    }
}

int main(void){
    init();
    int n;
    scanf("%d\n", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &G[i][j]);
        }
    }

    V[0] = BLACK;
    V_value[0] = 0;
    int new_node = 0;
    int sum = 0;
    while(1){
        for(int i = 0; i < n; i++){
            if(G[new_node][i] != -1 && V[i] == WHITE){
                V_value[i] = min(V_value[i], G[new_node][i]);
            }
        }

        int min_value = INF;
        int min_index = NIL;
        for(int i = 0; i < n; i++){
            if(V[i] == WHITE){
                if(V_value[i] < min_value){
                    min_index = i;
                    min_value = V_value[i];
                }
            }
        }
        if(min_index == NIL){
            break;
        }else{
            V[min_index] = BLACK;
            new_node = min_index;
            sum += min_value;
        }
    }

    printf("%d\n", sum);
}

