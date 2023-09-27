#include <iostream>
#include <vector>

using namespace std;

int d[100];

int main(void)
{
    int n;
    cin >> n;

    int graph[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            graph[i][j] = -1;

    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int c, v;
            cin >> v >> c;
            graph[u][v] = c;
        }
    }

    for (int i = 0; i < n; i++)
        d[i] = 100000000;
    d[0] = 0;

    vector<int> queue;
    for (int i = 0; i < n; i++)
        queue.push_back(i);

    while (!queue.empty()) {
        int u = queue[0];
        size_t j = 0;
        for (size_t i = 0; i < queue.size(); i++)
            if (d[queue[i]] < d[u]) {
                u = queue[i];
                j = i;
            }
        queue.erase(queue.begin() + j);

        for (int v = 0; v < n; v++)
            if (graph[u][v] > 0)
                if (d[v] > d[u] + graph[u][v])
                    d[v] = d[u] + graph[u][v];
    }

    for (int i = 0; i < n; i++)
        cout << i << " " << d[i] << endl;

    
    return 0;
}