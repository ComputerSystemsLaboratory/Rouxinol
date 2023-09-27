#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

int n, m; // 道の数，街の数
int edges[10][10];

int dijkstra(int from, int to) {
    int visited[m];
    fill(visited, visited + m, 0xffffff);
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > que;
    que.push(make_pair(0, from));
    visited[from] = 0;
    while (!que.empty()) {
        pair<int, int> current = que.top();
        que.pop();
        const int dist = current.first;
        const int pos = current.second;
        if (pos == to) {
            return dist;
        }
        for (int i = 0; i < m; i++) {
            const int d = dist + edges[pos][i];
            if (visited[i] > d) {
                visited[i] = d;
                que.push(make_pair(d, i));
            }
        }
    }
    return -1;
}

int main() {
    while (cin >> n, n) {
        memset(edges, 0x3, sizeof(edges));
        
        m = 0;
        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            edges[a][b] = edges[b][a] = c;
            m = max(a, max(b, m));
        }
        m++;
        
        int res, res_time = 0x7fffffff;
        for (int i = 0; i < m; i++) {
            int total = 0;
            for (int j = 0; j < m; j++) {
                total += dijkstra(i, j);
            }
            if (total < res_time) {
                res_time = total;
                res = i;
            }
        }
        
        cout << res << ' ' << res_time << endl;
    }
    
    return 0;
}