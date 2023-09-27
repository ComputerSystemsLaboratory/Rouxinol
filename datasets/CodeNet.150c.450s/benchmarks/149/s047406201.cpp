// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A&lang=jp 

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

#define NIL -1
#define N_MAX 10000

int Node[N_MAX];

void init(){
    for(int i = 0; i < N_MAX; i++){
        Node[i] = NIL;
    }
}

int findSet(int x){
    vector<int> V;
    int index = x;
    while(Node[index] != NIL){
        V.push_back(index);
        index = Node[index];
    }
    for(int i = 0; i < V.size(); i++){
        Node[V[i]] = index;
    }
    return index;
}

void unite(int x, int y){
    int root_x = findSet(x);
    int root_y = findSet(y);
    if(root_x != root_y){
        Node[root_x] = root_y;
    }
}

bool same(int x, int y){
    if(findSet(x) == findSet(y)){
        return true;
    }else{
        return false;
    }
}

int main(void){
    init();

    int n, q;
    scanf("%d %d", &n, &q);

    for(int i = 0; i < q; i++){
        int com, x, y;
        scanf("%d %d %d", &com, &x, &y);
        if(com == 0){
            unite(x, y);
        }else{
            if(same(x, y)){
                printf("1\n");
            }else{
                printf("0\n");
            }
        }
    }
}

