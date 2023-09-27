//
//  main.cpp
//  connected_components
//
//  Created by ???????????? on 2017/10/22.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

#define n_max 100000

#define NIL -1

bool found;
int n;
int color[n_max];
vector<int> G[n_max];

void encode_graph_list(){
    int i, id, node, f;
    
    scanf("%d", &n);
    scanf("%d", &node);
    
    for (i = 0; i < node; i++){
        scanf("%d", &id);
        scanf("%d", &f);
        G[id].push_back(f);
        G[f].push_back(id);
    }
    
}

void dfs(int u, int c){
    color[u] = c;
    for (int v = 0; v < G[u].size(); v++){
        int t = G[u][v];
        if(color[t] == NIL){
            dfs(t, c);
        }
    }
}

void assign_color(){
    int id = 0;
    for(int i = 0; i < n; i++) color[i] = NIL;
    for(int i = 0; i < n; i++){
        if(color[i] == NIL){
            dfs(i, id++);
        }
    }
}


int main(int argc, const char * argv[]) {
    int qs, i, id, target;
    encode_graph_list();
    assign_color();
    scanf("%d", &qs);
    for (i = 0; i < qs; i++){
        scanf("%d %d", &id, &target);
        if(color[id] == color[target]) cout << "yes" <<endl;
        else cout << "no"<<endl;
    }
    return 0;
}