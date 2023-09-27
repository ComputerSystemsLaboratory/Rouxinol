#include <iostream>

using namespace std;

#define N_MAX 100

int Adj[N_MAX][N_MAX] = {};
int Min_d[N_MAX];

void bfs(int v, int d, int num_node);

int main()
{
    int n, i, u, k, v, j;

    cin >> n;

    for (i = 0; i < n; i++) Min_d[i] = -1;

    //??£??\???????????????
    for (i = 0; i < n; i++) {
        cin >> u >> k;
        while (k-- > 0) {
            cin >> v;
            Adj[u-1][v-1] = 1;
        }
    }
/*
    cout << "show Adjacency matrix" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n ; j++) {
            if (j == n - 1)
                cout << Adj[i][j] << endl;
            else
                cout << Adj[i][j] << ' ';
        }
    }
*/
    //??¢?´¢??????
    Min_d[0] = 0;
    bfs(1, 1, n);

    //????????????
    for(i = 1; i <= n; i++) {
        cout << i << ' ' << Min_d[i-1] << endl;
    }

    return 0;
}

void bfs(int v, int d, int num_node) {
    int i;
//    cout << "bfs node : " << v << endl;

    for(i = 1; i <= num_node; i++) {
        if (Adj[v-1][i-1] == 1) {
            if (Min_d[i-1] == -1 || Min_d[i-1] > d) {
                Min_d[i-1] = d;
                bfs(i, d+1, num_node);
            }
        }
    }
}