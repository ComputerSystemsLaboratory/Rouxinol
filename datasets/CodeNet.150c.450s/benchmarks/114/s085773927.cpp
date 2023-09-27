#include<iostream>

using namespace std;

int n, M[100][100], W = 0, G = 1, B = 2;

int prim () {

    int u, minv, i, v, d[100], p[100], color[100], sum;

    for (i = 0; i < n; i++) {
        d[i] = (1 << 21);
        p[i] = -1;
        color[i] = W;
    }

    d[0] = 0;

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
                if (d[v] > M[u][v]) {
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = G;
                }
            }
        }

    }

    sum = 0;
    for (i = 0; i < n; i++) {
        if (p[i] != -1) {
            sum += M[i][p[i]];
        }
    }

    return sum;

}

int main () {

    int i, j, e;

    cin >> n;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> e;
            M[i][j] = (e == -1) ? (1 << 21) : e;
        }
    }

    cout << prim () << endl;

    return 0;

}