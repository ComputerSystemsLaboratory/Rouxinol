#include <iostream>
#include <stdio.h>
#include <algorithm> 

using namespace std;

const int MAX_N = 45 * 2 + 4;
const int MAX_V = 10 + 4;
const int INF = 0x3f3f3f3f;

int n;
int v;
struct Edge {
    int from;
    int to;
    int cost;
} edge[MAX_N];

int d[MAX_V];

int Bellman_Ford (int s) {
    int res = 0;
    fill(d, d + MAX_V, INF);
    d[s] = 0;
    while (true) {
        bool update = false;
        for (int i = 0; i < 2 * n; i++) {
            Edge e = edge[i];
            if (d[e.from] != INF && d[e.from] + e.cost < d[e.to]) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if (!update) {
            break;
        }        
    }
    for (int i = 0; i <= v; i++) {
        res += d[i];
    }
    return res;
}

int main() {
    while (scanf("%d", &n) && n > 0) {
        int path[MAX_V];                           
        v = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &edge[i].from, &edge[i].to, &edge[i].cost);
            edge[i + n].from = edge[i].to;
            edge[i + n].to = edge[i].from;
            edge[i + n].cost = edge[i].cost;
            v = max(v, edge[i].from);
            v = max(v, edge[i].to);
        }

        for (int i = 0; i <= v; i++) {
            path[i] = Bellman_Ford(i);
        }
        printf("%d %d\n", min_element(path, path + v + 1) - path, *min_element(path, path + v + 1));
    }
    return 0;    
}