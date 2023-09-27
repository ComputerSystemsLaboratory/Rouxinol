#include <iostream>

#define N_MAX 100

using namespace std;

int t = 1;
int adj_matrix[N_MAX][N_MAX];
int d[N_MAX];
int f[N_MAX];

void dfs(int v, int n)
{
    if (d[v] == 0) {
        d[v] = t;
        t++;
        for (int i = 0; i < n; i++) {
            if (adj_matrix[v][i] != 0) {
                dfs(i, n);
            }
        }
        if (f[v] == 0) {
            f[v] = t;
            t++;
        }
    }
}

int main()
{
    int n, u, k, v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        d[i] = 0;
        f[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adj_matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> u;
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> v;
            adj_matrix[u-1][v-1] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        dfs(i, n);
    }

    for (int i = 0; i < n; i++) {
        cout << i+1 << " " << d[i] << " " << f[i] << endl;
    }

    return 0;
}