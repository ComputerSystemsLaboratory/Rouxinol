#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define INF 1000000000
#define NUM 100
#define NIL -1
#define WHITE 0
#define BLACK 1
using namespace std;

int G[NUM][NUM];
int V[NUM];
int color[NUM];
int node_num;
int dist_sum = 0;

void init(){
    for(int i = 0; i < node_num; i++){
        for(int j = 0; j < node_num; j++){
            int a;
            scanf("%d", &a);
            if(a == -1){
                G[i][j] = INF;
            }else{
                G[i][j] = a;
            }
        }
    }

    for(int i = 0; i < node_num; i++){
        V[i] = INF;
        color[i] = WHITE;
    }
}

void updateAround(int n){
    color[n] = BLACK;
    for(int i = 0; i < node_num; i++){
        V[i] = min(V[i], G[n][i]);
    }

    int min_index = NIL;
    int min_value = INF;
    for(int i = 0; i < node_num; i++){
        if(color[i] == BLACK){
            continue;
        }
        if(V[i] < min_value){
            min_value = V[i];
            min_index = i;
        }
    }
    if(min_index != NIL){
        dist_sum += min_value;
        updateAround(min_index);
    }
}

int main(void){
    scanf("%d", &node_num);

    init();
    updateAround(0);

    printf("%d\n", dist_sum);
}

