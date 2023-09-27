// 下記, 参考.
// https://www.geeksforgeeks.org/bellman-ford-algorithm-dp-23/
#include <bits/stdc++.h>
using namespace std;
const long long INF = 1LL<<60;
typedef long long LL;

struct Edge{ int f, t, w; };
struct Graph{
    int V, E;
    struct Edge* edge;
};
struct Graph* build(int V, int E){
    struct Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
}

void printArr(LL dist[], int n){ 
    // printf("Vertex Distance from Source\n"); 
    // for(int i = 0; i < n; ++i) printf("%d \t\t %d\n", i, dist[i]);
    for(int i = 0; i < n; i++){
        if(dist[i] == INF) printf("%s\n", "INF");
        else               printf("%d\n", dist[i]);
    }
}

// ベルマン–フォード法.
// https://ja.wikipedia.org/wiki/ベルマン–フォード法
// https://www.geeksforgeeks.org/bellman-ford-algorithm-dp-23/
// グラフをベルマン–フォード法で探索する.
// ※BellmanFordの動作確認用.
// @param src: 探索開始する頂点.
// @param graph: グラフ.
// @return: 特に無し.
void BellmanFord(struct Graph* graph, int src){
    int V = graph->V, E = graph->E;
    LL dist[V];
    // Step 1: Initialize distances from src to all other vertices as INFINITE.
    for(int i = 0; i < V; i++) dist[i] = INF;
    dist[src] = 0; 

    // Step 2: Relax all edges |V| - 1 times. A simple shortest
    // path from src to any other vertex can have at-most |V| - 1 edges.
    for(int i = 1; i < V; i++){
        for(int j = 0; j < E; j++){
            int u = graph->edge[j].f;
            int v = graph->edge[j].t;
            int w = graph->edge[j].w;
            if(dist[u] != INF && dist[u] + w < dist[v]) dist[v] = dist[u] + w;
        }
    }
    
    // Step 3: check for negative-weight cycles.
    // The above step guarantees shortest distances
    // if graph doesn't contain negative weight cycle.
    // If we get a shorter path, then there is a cycle.
    bool negative = false;
    for(int i = 0; i < E; i++){
        int u = graph->edge[i].f;
        int v = graph->edge[i].t;
        int w  = graph->edge[i].w;
        if(dist[u] != INF && dist[u] + w < dist[v]){
            negative = true;
            printf("%s\n", "NEGATIVE CYCLE");
            break;
        }
    }

    if(!negative) printArr(dist, V);
    return;
} 

int main(){

    // 1. 入力情報.
    int V, E, r;
    scanf("%d %d %d", &V, &E, &r);
    
    // 2. グラフ作成.
    struct Graph* graph = build(V, E);
    
    for(int i = 0; i < E; i++){
        int f, t, w;
        scanf("%d %d %d", &f, &t, &w);
        graph->edge[i].f = f;
        graph->edge[i].t = t;
        graph->edge[i].w = w;
    }
    
    // 3. 単一始点最短経路の重みを計算し出力.
    BellmanFord(graph, r);
    
    // 4. 後処理.
    return 0;

}
