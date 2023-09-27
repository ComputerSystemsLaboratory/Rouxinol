//Single Source Shortest Path I
#include <iostream>
#include <climits>
using namespace std;

static const int N = 100;
static const int WHITE = 0;
static const int BLACK = 1;
int n, A[N][N], colors[N], d[N];

void dijkstra() {
    int u, mind;
    for(int i = 0; i < N; i++) {
        colors[i] = WHITE;
        d[i] = INT_MAX;
    }
    d[0] = 0;
    while(1) {
        u = -1;
        mind = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(colors[i] == WHITE && d[i] < mind) {
                u = i;
                mind = d[i];
            }
        }
        if(u == -1) break;
        colors[u] = BLACK;
        for(int i = 0; i < n; i++) {
            if(A[u][i] != -1) {
                d[i] = min(d[i], mind + A[u][i]);
            }
        }
    }

}

int main() {
    int u, k, v, c;
    cin >> n;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            A[i][j] = -1;
        }
    }
    for(int i = 0; i < n; i++) {
        cin >> u >> k;
        for(int j = 0; j < k; j++) {
            cin >> v >> c;
            A[u][v] = c;
        }
    }

    dijkstra();

    for(int i = 0; i < n; i++) {
        cout << i << " " << d[i] << endl;
    }
}
