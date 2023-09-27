#include <iostream>
using ll = long long;
using namespace std;
/* initialize */
int n, u, k, v, c, A[100][100];

void dijkstra(){
    int c[100], d[100], p[100];
    for (int i = 0; i < n; ++i) { c[i] = 0;  d[i] = 100000000;}
    d[0] = 0;
    p[0] = -1;
    int minc;
    while(true){
        minc = INT32_MAX;
        int u = -1;
        for (int i = 0; i < n; ++i) {
            if (c[i] != 2 && d[i] < minc){
                minc = d[i];
                u = i;
            }
        }
        if(u == -1) break;

        c[u] = 2;

        for (int v = 0; v < n; ++v) {
            if (c[v] != 2 && A[u][v] != 100000000){
                if(d[u] + A[u][v] < d[v]){
                    d[v] = d[u] + A[u][v];
                    p[v] = u;
                    c[v] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << i << " " << (d[i] == 100000000 ? -1 : d[i]) << "\n";
    }
};
/* main */
int main() {
    cin >> n;
    for (int l = 0; l < n; ++l) {
        for (int i = 0; i < n; ++i) {
            A[l][i] = 100000000;
        }
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &u, &k);
        for (int j = 0; j < k; ++j) {
            scanf("%d %d", &v, &c);
            A[u][v] = c;
        }
    }
    dijkstra();
    return 0;
}
