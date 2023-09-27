// ALDS1_12_B.cpp
// Graph II - Single Source Shortest Path I
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

struct Node {
    int v;
    int c;
    Node(int v, int c): v(v), c(c) {}
};

const int maxN = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;
static const int INF = (1<<21);
vector<Node> G[maxN];
vector<int> dist(maxN, INF);
vector<int> p(maxN);
vector<int> color(maxN, WHITE);
int n;
int cnt = 0;
void dijkstra(int x)
{
    dist[x] = 0;
    p[x] = -1;
    while(++cnt != n) {
        int u = 0;
        int mindist = INF;
        for (int i = 0; i < n; i++) {
            if (color[i] != BLACK && dist[i] < mindist) {
                mindist = dist[i];
                u = i;
            }
        }

        for (int i = 0; i < G[u].size(); i++) {
            if (color[u] == BLACK) continue;
            int v = G[u][i].v;
            int c = G[u][i].c;
            if (dist[u] + c < dist[v]) {
                dist[v] = dist[u] + c;
                p[v] = u;
                color[v] = GRAY;
            }
        }
        color[u] = BLACK;
    }
}

int main()
{
    cin >> n;
    int u, k;
    int v, c;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v >> c;
            G[i].push_back(Node(v, c));
        }
    }
    dijkstra(0);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", i, dist[i]);
    }
    return 0;
}