#include <iostream>
#include <queue>

using ll = long long;
using namespace std;
int n, p, A[100][100];
int d[100], P[100], c[100];
/* initialize */

int bfs(){
    int u, minv;
    int sum;
    for (int i = 0; i < n; ++i) {
        d[i] = 1<<30;
        P[i] = -1;
        c[i] = 0;
    }
    d[0] = 0;
    
    while(true) {
        minv = 1 << 30;
        u = -1;
        for (int i = 0; i < n; ++i) {
            if (minv > d[i] && c[i] != 2) {
                u = i;
                minv = d[i];
            }
        }
        if (u == -1)break;
        c[u] = 2;
        for (int j = 0; j < n; ++j) {
            if (c[j] != 2 && A[u][j] != 1 << 30) {
                if (d[j] > A[u][j]) {
                    d[j] = A[u][j];
                    P[j] = u;
                    c[j] = 1;
                }
            }
        }
    }
        sum = 0;
        for (int i = 0; i < n; ++i) {
            if (P[i] != -1) sum += A[i][P[i]];
        }
    return sum;
}
/* main */
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> p;
            if (p == -1) A[i][j] = 1<<30;
            else A[i][j] = p;
        }
    }
    cout << bfs() << "\n";
}
