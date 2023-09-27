#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define V_MAX 10000
#define E_MAX 100000

#define NIL -1

// Union Find Tree (begin)
int Node[V_MAX];

void init(){
    for(int i = 0; i < V_MAX; i++){
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

// Union Find Tree (end)

typedef struct Edge{
    int v1;
    int v2;
    int w;
}Edge;

vector<Edge> Es;

bool edgeSort(Edge a, Edge b){
    return a.w < b.w;
}

int main(void){
    init();

    int V, E;
    scanf("%d %d", &V, &E);

    for(int i = 0; i < E; i++){
        Edge e;
        scanf("%d %d %d", &e.v1, &e.v2, &e.w);
        Es.push_back(e);
    }

    sort(Es.begin(), Es.end(), edgeSort);

    int sum = 0;
    for(int i = 0; i < E; i++){
        if(!same(Es[i].v1, Es[i].v2)){
            sum += Es[i].w;
            unite(Es[i].v1, Es[i].v2);
        }
    }

    printf("%d\n", sum);
}

