//Minimum Spannig Tree
#include <iostream>
#include <climits>

using namespace std;

static const int N = 100;
static const int WHITE = 0;
static const int BLACK = 1;
int n, A[N][N], colors[N], d[N], p[N];

int prim() {
    int l = 0, mincost, u;
    for(int i = 0; i < N; i++) {
        colors[i] = WHITE;
        d[i] = INT_MAX;
    }
    d[0] = 0;
    p[0] = -1;
    while(1) {
        mincost = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(colors[i] == WHITE && d[i] < mincost) {
                mincost = d[i];
                u = i;
            }
        }
        if(mincost == INT_MAX) break;
        colors[u] = BLACK;
        l += mincost;
        for(int v = 0; v < n; v++) {
            if(colors[v] == WHITE && A[u][v] != -1) {
                if(A[u][v] < d[v]) {
                    d[v] = A[u][v];
                    p[v] = u;
                }
            }
        }
    }
    return l;
}

int main() {
    int a;
    cin >> n;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) A[i][j] = -1;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            cin >> a;
            A[i][j] = a;
        }
    }
    cout << prim() << endl;
}
