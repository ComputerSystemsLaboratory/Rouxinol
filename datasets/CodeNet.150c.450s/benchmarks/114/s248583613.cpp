#include <iostream>
#include <climits>
using namespace std;

int n;
int g[101][101];

int d[101];
char c[101];
int p[101];

void prim() {
    for (int i = 0; i < n; ++i) {
        d[i] = INT_MAX;
        c[i] = 'w';
    }
    c[0] = 'b';
    d[0] = 0;
    while (true) {
        int u, v;
        int mine = INT_MAX;
        for (int j = 0; j < n; ++j) {
            if (c[j] == 'b') {
                u = j;
                for (int k = 0; k < n; ++k) {
                    if(g[u][k] > -1 && g[u][k] <= d[k] && c[k] != 'b' && g[u][k] <= mine) {
                        d[k] = g[u][k];
                        mine = d[k];
                        v = k;
                    }
                }
            }
        }
        p[v] = u;
        c[v] = 'b';
        if(mine == INT_MAX) break;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int w;
            cin >> w;
            g[i][j] = w;
        }
    }
    prim();
    int sum = 0;
    for (int k = 0; k < n; ++k) {
        sum += d[k];
    }
    cout << sum << endl;


    return 0;
}

