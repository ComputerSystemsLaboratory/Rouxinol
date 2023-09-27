//Minimum Spannig Tree
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

static const int N = 100;
static const int WHITE = 0;
static const int BLACK = 1;

int prim(vector<vector<int>> &G, int n) {
    int colors[n], d[n];
    for(int i = 0; i < n; i++) {
        colors[i] = WHITE;
        d[i] = INT_MAX;
    }

    d[0] = 0;
    int l = 0;
    while(1) {
        int u = -1;
        int mincost = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(colors[i] == WHITE && d[i] < mincost) {
                mincost = d[i];
                u = i;
            }
        }
        if(u == -1) break;
        colors[u] = BLACK;
        l += mincost;
        for(int v = 0; v < n; v++)
            if(colors[v] == WHITE && G[u][v] != -1)
                if(G[u][v] < d[v])
                    d[v] = G[u][v];
    }
    return l;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> G(n, vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> G[i][j];

    cout << prim(G, n) << endl;
}

