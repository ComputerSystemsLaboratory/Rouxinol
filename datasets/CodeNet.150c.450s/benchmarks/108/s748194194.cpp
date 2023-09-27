#include <iostream>
#include <vector>
#include <queue>

using namespace std;

queue<int> que;

void bfs(vector<vector<int> > &G, int s, int *seen) {
    seen[s] = 0;
    que.push(s);
    
    while (!que.empty()) {
        int u = que.front();
        que.pop();

        for (int i = 0; i < G[u].size(); i++) {
            int v = G[u][i];

            if (seen[v] != -1)  
                continue;

            seen[v] = seen[u] + 1;
            que.push(v);
        }
    }
}

int main() {
    vector<vector<int> > G;
    int n;  cin >> n;
    G.resize(n);
    for (int i = 0; i < n; i++) {
        int u, k;   cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int x;  cin >> x;
            G[u-1].push_back(x-1);
        }
    }

    int *seen = new int[n];
    for (int i = 0; i < n; i++)
        seen[i] = -1;
    seen[0] = 0;

    bfs(G, 0, seen);

    for (int i = 0; i < n; i++)
        cout << i+1 << " " << seen[i] << endl;

    return 0;
}
