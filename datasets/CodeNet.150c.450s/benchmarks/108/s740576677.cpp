#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

class Vertex {
public:
    int num;
    bool flag;                  // 以前訪れたかどうか
    vector<int> adj;            // 隣接リスト
};

int dist[101];
void bfs(map<int, Vertex>& graph, Vertex s) {
    queue<Vertex> que;

    dist[s.num] = 0;
    graph[s.num].flag = true;
    que.push(s);
    while (!que.empty()) {
        Vertex u = que.front(); que.pop();
        for (auto i = 0; i < u.adj.size(); i++) {
            Vertex v = graph[u.adj[i]];
            if (!v.flag) {
                graph[u.adj[i]].flag = true;
                dist[v.num] = dist[u.num]+1;
                que.push(v);
            }
        }
    }
}

int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < 101; i++) {
        dist[i] = -1;
    }

    map<int, Vertex> graph; // 頂点の番号->頂点
    for (int i = 0; i < n; i++) {
        Vertex v;
        int num, k;
        cin >> num >> k;
        v.flag = false;
        v.num = num;
        for (int j = 0; j < k; j++) {
            int tmp;
            cin >> tmp;
            v.adj.push_back(tmp);
        }
        graph[num] = v;
    }

    bfs(graph, graph[1]);
    for (int i = 1; i <= n; i++) {
        cout << i << " " << dist[i] << endl;
    }

    return 0;
}