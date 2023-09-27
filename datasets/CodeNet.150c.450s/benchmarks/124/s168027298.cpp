#include <bits/stdc++.h>
static const int MAX = 100;
static const int INFTY = 10000000;
int V;
std::vector<std::pair<int, int> > G[MAX];

void dijkstra() {
    std::priority_queue<std::pair<int, int> > pq;
    bool visited[MAX];
    int d[MAX];
    for (int i = 0; i < V; i++) {
        visited[i] = false;
        d[i] = INFTY;
    }
    d[0] = 0;
    pq.push({0, 0}); //dist from target * -1, current node
    visited[0] = true;

    while ( !pq.empty() ) {
        std::pair<int, int> f = pq.top(); pq.pop();
        int current = f.second;
        visited[current] = true;

        if (d[current] < f.first * (-1)) continue;

        for (unsigned long i = 0; i < G[current].size(); i++) {
            int target = G[current][i].first;
            if (visited[target]) continue;
            if (d[target] > d[current] + G[current][i].second) {
                d[target] = d[current] + G[current][i].second;
                pq.push({d[target] * (-1), target});
            }
        }
    }

    for (int i = 0; i < V; i++) {
        std::cout << i << " " << (d[i] == INFTY ? -1 : d[i]) << std::endl;
    }
}



int main()
{
    int source, target, cost, edges;
    std::scanf("%d", &V);
    for (int i = 0; i < V; i++) {
        std::scanf("%d %d", &source, &edges);
        for (int j = 0; j < edges; j++) {
            std::scanf("%d %d", &target, &cost);
            G[source].push_back({target, cost});
        }
    }
    dijkstra();
    return 0;
}

