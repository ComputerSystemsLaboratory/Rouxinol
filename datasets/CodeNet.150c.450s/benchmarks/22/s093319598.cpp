#include <bits/stdc++.h>

#define MAX 1000
#define INFTY (1 << 29)


class Edge {
public:
    int source, target, cost;
    Edge(int source=0, int target = 0, int cost = 0) : source(source), target(target), cost(cost) { }
};

int d[MAX];

void printArr(const int &N)
{
    for (int i = 0; i < N; ++i)
        (d[i] == INFTY) ? std::printf("INF\n") : std::printf("%d\n", d[i]);
}


void BellmanFord(std::vector<Edge> &edges, const int &V, const int &E, const int &src) {

    for (int i = 0; i < V; i++) d[i] = INFTY;
    d[src] = 0;
    int chg = 0;

    for (int i = 1; i < V-1; i++) {
        chg = 0;
        for (int j = 0; j < E; j++) {
            int u = edges[j].source;
            int v = edges[j].target;
            int cost = edges[j].cost;

            if (d[u] != INFTY && d[u] + cost < d[v]) {
                d[v] = d[u] + cost;
                chg++;
            }
        }
        if (chg == 0) break;
    }

    if (chg != 0) {

        //detect if graph contains negative cycle
        for (int i = 0; i < E; i++) {
            int u = edges[i].source;
            int v = edges[i].target;
            int cost = edges[i].cost;

            if (d[u] != INFTY && d[u] + cost < d[v]) {
                std::printf("NEGATIVE CYCLE\n");
                return;
            }
        }
    }

    printArr(V);
}


int main()
{
    int V, E, src;
    std::scanf("%d %d %d", &V, &E, &src);
    int source, target, cost;
    std::vector<Edge> edges;
    edges.reserve(E);

    for (int i = 0; i < E; i++) {
        std::scanf("%d %d %d", &source, &target, &cost);
        edges.push_back(Edge(source, target, cost));
    }

    BellmanFord(edges, V, E, src);

    return 0;
}

