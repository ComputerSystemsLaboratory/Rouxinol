#include <bits/stdc++.h>

#define INFTY 1000001
#define MAX 100

class Edge{
public:
    int target, cost;
    Edge(int target = 0, int cost = 0) : target(target), cost(cost) {}
};

std::vector<Edge> G[MAX];
bool visited[MAX];
int parent[MAX], key[MAX];
int V, minv, min_index;

int minKey() {
    minv = INFTY;
    for (int v = 0; v < V; v++)
        if (!visited[v] && key[v] < minv)
            minv= key[v], min_index = v;
    return min_index;
}


void printMST()
{
    int sum = 0;
    for (int i = 1; i < V; i++)
        sum += key[i];
    std::printf("%d\n", sum);

}

void prim() {

    for (int i = 0; i < V; i++) {
        key[i] = INFTY;
        visited[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;

    int current, target, cost;

    for (int i = 0; i < V-1; i++) {
        current = minKey();
        visited[current] = true;

        for (unsigned long v = 0; v < G[current].size(); v++) {
            target = G[current][v].target;
            cost = G[current][v].cost;
            if (!visited[target] && cost < key[target])
                parent[target] = current, key[target] = cost;
        }
    }
    printMST();

}


int main()
{
    std::scanf("%d", &V);
    int cost;

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            std::scanf("%d", &cost);
            if (cost != -1) G[i].push_back(Edge(j, cost));
        }
    }

    prim();
    return 0;
}

