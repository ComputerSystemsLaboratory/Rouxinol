#include<stdio.h>
#include<cstdlib>
// 0origin
// referred to http://www.deqnotes.net/acmicpc/dijkstra/
// 単純な方法の方

#define MAX_DATA 100
#define INF 1000001
#define NIL -2

int n;
typedef struct {
    int num;
    // ここから伸びるエッジの情報
    int edges_to[MAX_DATA]; // 各接続先の番号
    int edges_cost[MAX_DATA]; // 各エッジのコスト
    int edges_size; // エッジの本数
    
    // ダイクストラ法のためのデータ
    bool done; // 確定ノードか否か
    int cost; // このノードへの現時点で判明しているコスト
}Node;

Node node[MAX_DATA];

int min(int x, int y){
    return x < y ? x : y;
}

void Init(){
    for (int i = 0; i < n; i++) {
        node[i].done = false;
        node[i].cost = INF;
    }
}

void Dijkstra(){
    Init();
    node[0].cost = 0;
    /*
    while (1) {
        Node doneNode;
        doneNode.cost = NIL;
        for (int i = 0; i < n; i++) {
            printf("node[%d].done:%s cost:%d doneNode.cost:%d\n", i, node[i].done == true ? "true" : "false", node[i].cost, doneNode.cost);
            if (node[i].done == true || node[i].cost == INF) {
                continue;
            }
            if (doneNode.cost == NIL || node[i].cost < doneNode.cost) {
                doneNode = node[i];
            }
        }
        if(doneNode.cost == NIL){
            break;
        }
        
        .done = true;
        
        for (int i = 0; i < doneNode.edges_size; i++) {
            int to = doneNode.edges_to[i];
            int cost = doneNode.cost + doneNode.edges_cost[i];
            if (node[to].cost < 0 || cost < node[to].cost) {
                node[to].cost = cost;
            }
        }
    }*/
    
    Node doneNode[MAX_DATA];
    node[0].done = true;
    doneNode[0] = node[0];
    int NOFdoneNode = 1;
    while (NOFdoneNode < n) {
        int mincost = INF;
        for(int i = 0; i < NOFdoneNode; i++){ // doneNodeを動かす
            for(int j = 0; j < doneNode[i].edges_size; j++){ // doneNodeから伸びているnodeをうごかす
                //printf("%d to %d\n", doneNode[i].num, doneNode[i].edges_to[j]);
                if (node[doneNode[i].edges_to[j]].done) { // 確定ノードと確定ノードがつながっていたらスルー
                    //printf(" through\n");
                    continue;
                }
                //printf(" %d >?< %d\n", node[doneNode[i].edges_to[j]].cost, doneNode[i].cost + doneNode[i].edges_cost[j]);
                if(node[doneNode[i].edges_to[j]].cost >= doneNode[i].cost + doneNode[i].edges_cost[j]){ // 確定nodeたちからの最短距離を記録
                    node[doneNode[i].edges_to[j]].cost = doneNode[i].cost + doneNode[i].edges_cost[j];
                    if(mincost > node[doneNode[i].edges_to[j]].cost){ // mincostが更新されたらdoneNodeの最後尾を更新
                        mincost = node[doneNode[i].edges_to[j]].cost;
                        doneNode[NOFdoneNode] = node[doneNode[i].edges_to[j]];
                    }
                }
            }
        }
        node[doneNode[NOFdoneNode].num].done = true;
        //printf("%d is done\n", doneNode[NOFdoneNode].num);
        
        /*for(int i = 0; i < NOFdoneNode+1; i++){
            printf("%d,", doneNode[i].num);
        }
        printf("\n\n");*/
        NOFdoneNode++;
    }
}

int main(){
    int m;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d%d", &m ,&m);
        node[i].edges_size = m;
        node[i].num = i;
        for (int j = 0; j < m; j++) {
            scanf("%d %d", &node[i].edges_to[j], &node[i].edges_cost[j]);
        }
        node[i].edges_to[m] = NIL;
        node[i].edges_cost[m] = NIL;
    }
    
#ifdef D
    for (int i = 0; i < n; i++) {
        printf("%d:", i);
        for (int j = 0; ; j++) {
            if(node[i].edges_to[j] == NIL){
                break;
            }
            printf("%d(%d) ", node[i].edges_to[j], node[i].edges_cost[j]);
        }
        printf("\n");
    }
#endif
    
    Dijkstra();
    
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", i, node[i].cost);
    }
    
    return 0;
}

