#include<iostream>

using namespace std;

int n, M[100][100], W = 0, G = 1, B = 2;

void dijkstra () {

    int minv, d[100], color[100], i, u, v;

    for (i = 0; i < n; i++) {
        d[i] = (1 << 21);
        color[i] = W;
    }

    d[0] = 0;
    color[0] = G;

    while (1) {

        minv = (1 << 21);
        u = -1;

        for (i = 0; i < n; i++) {
            if (minv > d[i] && color[i] != B) {
                u = i;
                minv = d[i];
            }
        }

        if (u == -1) {
            break;
        }

        color[u] = B;

        for (v = 0; v < n; v++) {
            if (color[v] != B && M[u][v] != (1 << 21)) {
                if (d[v] > d[u] + M[u][v]) {
                    d[v] = d[u] + M[u][v];
                    color[v] = G;
                }
            }
        }

    }

    for (i = 0; i < n; i++) {
        cout << i << " " << (d[i] == (1 << 21) ? -1 : d[i]) << endl;
    }

}

int main () {

    int k, c, u, v, i, j;

    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            M[i][j] = (1 << 21);
        }
    }

    for (i = 0; i < n; i++) {
        cin >> u >> k;
        for (j = 0; j < k; j++) {
             cin >> v >> c;
             M[u][v] = c;
        }
    }

    dijkstra ();

    return 0;

}