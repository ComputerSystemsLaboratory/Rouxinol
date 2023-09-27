//Single Source Shortest Path I
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

static const int N = 100;
static const int WHITE = 0;
static const int BLACK = 1;
//int colors[N], d[N];
//
//void dijkstra(vector<vector<int>> &W, int n) {
//    int u, mind;
//    for(int i = 0; i < n; i++) {
//        colors[i] = WHITE;
//        d[i] = INT_MAX;
//    }
//    d[0] = 0;
//    while(1) {
//        u = -1;
//        mind = INT_MAX;
//        for(int i = 0; i < n; i++) {
//            if(colors[i] == WHITE && d[i] < mind) {
//                u = i;
//                mind = d[i];
//            }
//        }
//        if(u == -1) break;
//        colors[u] = BLACK;
//        for(int i = 0; i < n; i++) {
//            if(W[u][i] != -1) {
//                d[i] = min(d[i], mind + W[u][i]);
//            }
//        }
//    }
//}
int d[N];

void dijkstra(vector<vector<int>> &W, int n) {
    int colors[n];
    for(int i=0; i<n; i++) {
        colors[i] = WHITE;
        d[i] = INT_MAX;
    }
    
    d[0] = 0;

    while(1) {
        int u = -1;
        int min_distance = INT_MAX;
        for(int i=0; i<n; i++) {
            if(colors[i] == BLACK) continue;
            if(d[i] < min_distance) {
                u = i;
                min_distance = d[i];
            }
        }
        if(u == -1) break;

        colors[u] = BLACK;
        for(int i=0; i<n; i++) {
            if(colors[i] == BLACK) continue;
            if(W[u][i] == -1) continue;
            d[i] = min(d[i], d[u] + W[u][i]);
        }
    }
}

int main() {
    int n;
    int u, k, v, c;
    cin >> n;
    vector<vector<int>> W(n, vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            W[i][j] = -1;
    for(int i = 0; i < n; i++) {
        cin >> u >> k;
        for(int j = 0; j < k; j++) {
            cin >> v >> c;
            W[u][v] = c;
        }
    }

    dijkstra(W, n);

    for(int i = 0; i < n; i++) {
        cout << i << " " << d[i] << endl;
    }
}
