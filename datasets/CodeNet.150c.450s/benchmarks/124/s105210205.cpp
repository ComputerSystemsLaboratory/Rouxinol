#include <stdio.h>
#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

#define NUM 100
#define NIL -1
#define INF 1000000000
#define WHITE 0
#define BLACK 1
int node_num;
vector<tuple<int, int>> G[NUM];
int V[NUM];
int color[NUM];

void init(void){
    scanf("%d", &node_num);

    for(int i = 0; i < node_num; i++){
        int u, k;
        scanf("%d", &u);
        scanf("%d", &k);

        for(int j = 0; j < k; j++){
            int v_, c;
            scanf("%d", &v_);
            scanf("%d", &c);
            G[u].push_back(make_tuple(v_, c));
        }
    }

    for(int i = 0; i < node_num; i++){
        color[i] = WHITE;
        V[i] = INF;
    }
}

void updateAround(int n){
    color[n] = BLACK;
    for(int i = 0; i < G[n].size(); i++){
        V[get<0>(G[n][i])] = min(V[get<0>(G[n][i])], V[n] + get<1>(G[n][i]));
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
        updateAround(min_index);
    }
}

int main(void){
    init();

    V[0] = 0;
    updateAround(0);

    for(int i = 0; i < node_num; i++){
        printf("%d %d\n", i, V[i]);
    }
}



