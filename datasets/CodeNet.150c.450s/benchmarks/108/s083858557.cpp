//
//  main.cpp
//  breadth_first_search
//
//  Created by ???????????? on 2017/10/22.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <queue>

#define n_max 100
#define INFTY 1000
#define WHITE 0
#define GRAY 1
#define BLACK 2

using namespace std;

int M[n_max][n_max], color[n_max], d[n_max], n;

queue<int> Q;

void encode_graph(){
    int i, j, id, num, node;
    
    //initialize with 0
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            M[i][j] = 0;
        }
    }
    
    for (i = 0; i < n; i++){
        scanf("%d", &id);
        scanf("%d", &num);
        for(j = 0; j < num; j++){
            scanf("%d", &node);
            M[id-1][node-1] = 1;
        }
    }
}

void bfs(){
    for(int i = 0; i < n ; i++){
        color[i] = WHITE;
        d[i] = INFTY;
    }
    //starting point
    int s = 0;
    color[s] = GRAY;
    d[s] = 0;
    Q.push(s);
    
    while(!Q.empty()){
        int u = Q.front(); Q.pop();
        for(int v = 0; v < n; v++){
            if((M[u][v]) && (color[v] == WHITE)){
                color[v] = GRAY;
                d[v] = d[u] + 1;
                Q.push(v);
            }
        }
        color[u] = BLACK;
    }
    
    
    
}

int main(int argc, const char * argv[]) {
    scanf("%d", &n);
    
    encode_graph();
    bfs();
    
    for(int i = 0; i < n; i++){
        cout<<i+1<<" "<<((d[i] == INFTY) ? (-1): (d[i]))<<endl;
    }
    
//    std::cout << "Hello, World!\n";
    return 0;
}