#include <bits/stdc++.h>
 
using namespace std;

const int MAXV = 1010, MAXE = 1000000;

struct edge { int u, v, weight, next; } g[MAXE];


int n;
int head[MAXV], idx;

int parent[MAXV], visited[MAXV], dist[MAXV];

void bfs(int u){
    memset(parent, -1, sizeof(parent));
    memset(visited, 0, sizeof(visited));
    memset(dist, -1, sizeof(dist));
    
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    dist[u] = 0;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = head[u]; ~i; i = g[i].next) {
            int v = g[i].v;
            if (!visited[v]) {
                q.push(v);
                visited[v] = 1, parent[v] = u, dist[v] = dist[u] + 1;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    
 
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    idx = 0;
    memset(head, -1, sizeof(head));
    
    cin >> n;
    
    for (int i = 0, u, m, v; i < n; i++) {
        cin >> u >> m;
        for (int j = 0; j < m; j++) {
            cin >> v;
            g[idx] = edge{u, v, 0, head[u]};
            head[u] = idx++;
        }
    }
    
    bfs(1);
    
    for (int i = 1; i <= n; i++) {
        cout << i << " " << dist[i] << endl;
    }
    
    return 0;
}

