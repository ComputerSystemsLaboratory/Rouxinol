//
//  main.cpp
//  minnimum_spanning_tree
//
//  Created by ???????????? on 2017/10/23.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>

#define n_max 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 3000

using namespace std;

int n, M[n_max][n_max], color[n_max], d[n_max], p[n_max];

void init(){
    int i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &M[i][j]);
        }
        color[i] = WHITE;
        d[i] = INFTY;
    }
}

void prim(){
    //initializing
    d[0] = 0;
    p[0] = -1;
    
    int u;
    while(true){
        int mincost = INFTY;
        for(int i = 0; i < n; i++ ){
            if((color[i] != BLACK) && (d[i] < mincost)){
                mincost = d[i];
                u = i;
            }
        }
        
        if (mincost == INFTY) break;
        
        color[u] = BLACK;
        
        for(int v = 0; v < n; v++){
            if((color[v] != BLACK) && (M[u][v] != -1)){
                if(M[u][v] < d[v]){
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += d[i];
    }
    cout<<sum<<endl;
}

int main(int argc, const char * argv[]) {
    init();
    prim();
//    std::cout << "Hello, World!\n";
    return 0;
}