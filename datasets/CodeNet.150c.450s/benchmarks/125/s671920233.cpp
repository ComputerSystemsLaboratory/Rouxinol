#include <iostream>
#include <vector>

using namespace std;

void dfs(int n, vector<vector<int> > &G, int s, int *d, int *f, int &t) {
    d[s] = t++;
    for (int i = 0; i < G[s].size(); i++) {
        int v = G[s][i];
        
        if (d[v] != -1)
            continue;

        dfs(n, G, v, d, f, t);
    }
    f[s] = t++;
}

int main() {
    int n, u, k, v;
    cin >> n;
    vector<vector<int> > G(n);
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v;
            G[i].push_back(v-1);
        }
    }

    int *f = new int[n], *d = new int[n];
    for (int i = 0; i < n; i++)
        f[i] = d[i] = -1;

    int t = 1;
    for (int i = 0; i < n; i++) {
        if (d[i] == -1)
            dfs(n, G, i, d, f, t);
    }

    for (int i = 0; i < n; i++) 
        cout << i+1 << " " << d[i] << " " << f[i] << endl;

    return 0;
}
