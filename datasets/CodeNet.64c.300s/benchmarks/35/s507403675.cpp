#include <iostream>

using namespace std;

#define N_MAX 100

int main()
{
    int n, i, j, u, k, v;
    int Adj[N_MAX][N_MAX] = {};

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> u >> k;
        while (k-- > 0) {
            cin >> v;
            Adj[u-1][v-1] = 1;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n ; j++) {
            if (j == n - 1)
                cout << Adj[i][j] << endl;
            else
                cout << Adj[i][j] << ' ';
            /*
            cout << Adj[i][j] << ' ';
            if (j == n - 1)
                cout << endl;
            */
        }
    }

    return 0;
}