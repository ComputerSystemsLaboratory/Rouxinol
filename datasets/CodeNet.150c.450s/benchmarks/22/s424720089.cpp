#include <stdio.h>
#include <iostream>
using namespace std;

#define V_MAX 1000
#define E_MAX 2000
#define INF 1000000000

typedef struct Edge{
    int v1;
    int v2;
    int w;
}Edge;

Edge Es[E_MAX];
int A[V_MAX];

void init(void){
    for(int i = 0; i < V_MAX; i++){
        A[i] = INF;
    }
}


int main(void){
    init();

    int V, E, r;
    scanf("%d %d %d", &V, &E, &r);

    for(int i = 0; i < E; i++){
        scanf("%d %d %d", &Es[i].v1, &Es[i].v2, &Es[i].w);
    }

    A[r] = 0;

    bool is_updated;
    for(int i = 0; i < V; i++){
        is_updated = false;
        for(int j = 0; j < E; j++){
            if(A[Es[j].v2] > A[Es[j].v1] + Es[j].w && A[Es[j].v1] != INF){
                A[Es[j].v2] = A[Es[j].v1] + Es[j].w;
                is_updated = true;
            }
        }
    }

    if(is_updated){
        printf("NEGATIVE CYCLE\n");
        return 0;
    }

    for(int i = 0; i < V; i++){
        if(A[i] == INF){
            printf("INF\n");
        }else{
            printf("%d\n", A[i]);
        }
    }

}

