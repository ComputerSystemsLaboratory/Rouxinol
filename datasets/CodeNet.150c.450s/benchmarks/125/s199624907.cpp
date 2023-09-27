#include <iostream>
#include <vector>

using namespace std;

const int N = 101;
bool marked[N];
int d[N];
int f[N];

void dfs(vector<vector<int>>& g, int vertex, int& counter) {
    if (marked[vertex])
        return;
    marked[vertex] = true;
    counter++;
    d[vertex] = counter;
    for (int x : g[vertex]) {
        if (!marked[x])
            dfs(g, x, counter);
    }
    counter++;
    f[vertex] = counter;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> g(n + 1);
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }

    int counter = 0;
    for (int i = 1; i <= n; i++)
        dfs(g, i, counter);

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        cout << d[i] << " ";
        cout << f[i] << endl;
    }
    
    return 0;
}
