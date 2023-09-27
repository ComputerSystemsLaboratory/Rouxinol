#include<iostream>
using namespace std;
#define INF 1000000
int m[100][100]; //adjacency matrix
int n; //vertexes
void dijkstra();
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = INF;
        }
    }
    for (int i = 0; i < n; i++) {
        int u; //number
        int k; //output orders
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v; //vertex
            int c; //weight
            cin >> v >> c;
            m[u][v] = c;
        }
    }
    dijkstra();
    return 0;
}
void dijkstra() {
    int d[100]; //minimum cost
    int p[100]; //top parent
    d[0] = 0;
    p[0] = 1;
    for (int i = 1; i < n; i++) {
        p[i] = 0;
        d[i] = INF;
    }
    while (1) {
        int minv = INF;
        int u = -1;
        for (int i = 0; i < n; i++) {
            if (minv > d[i] && p[i] != 2) { //firstly only d[0]
                u = i; //tmp parent
                minv = d[i]; //min cost of 0 to i
            }
        }
        if (u == -1) {
            break;
        }
        p[u] = 2; //決まったら
        for (int v = 0; v < n; v++) {
            if (m[u][v] != INF && p[v] != 2) { //u and v are connected
                if (d[v] > d[u] + m[u][v]) {
                    d[v] = d[u] + m[u][v]; //get smaller cost
                    //ここでd[v]がINFから解放され、次の親になれる
                    p[v] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << i << " ";
        if (d[i] == INF) {
            cout << -1 << endl;
        } else {
            cout << d[i] << endl;
        }
    }
}

