#include<iostream>
#include<stack>

using namespace std;

int  n, M[100][100], d[100], f[100], color[100], tt, nt[100], W = 0, G = 1, B = 2;

int next (int u) {

    int v;
    for (v = nt[u]; v < n; v++) {
        nt[u] = v + 1;
        if (M[u][v] != 0) {
            return v;
        }
    }
    return -1;

}

void dfs_visit (int r) {

    int i, u, v;

    for (i = 0; i < n; i++) {
        nt[i] = 0;
    }

    stack<int> S;
    S.push(r);
    color[r] = G;
    d[r] = ++tt;

    while (!S.empty()) {
        u = S.top();
        v = next (u);
        if (v != -1) {
            if (color[v] == W) {
                color[v] = G;
                d[v] = ++tt;
                S.push(v);
            }
        } else {
            S.pop();
            color[u] = B;
            f[u] = ++tt;
        }
    }

}

void dfs () {

    int i, u;

    for (i = 0; i < n; i++) {
        color[i] = W;
        nt[i] = 0;
    }
    tt = 0;

    for (u = 0; u < n; u++) {
        if (color[u] == W) {
            dfs_visit(u);
        }
    }

    for (i = 0; i < n; i++) {
        cout << i + 1 << " " << d[i] << " " << f[i] << endl;
    }

}

int main () {

    int u, k, v, i, j;

    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            M[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        cin >> u >> k;
        u--;
        for (j = 0; j < k; j++) {
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

    dfs ();

    return 0;

}