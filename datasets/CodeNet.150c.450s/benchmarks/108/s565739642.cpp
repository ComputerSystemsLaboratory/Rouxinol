#include <iostream>
#include <queue>

using ll = long long;
using namespace std;
int n, A[100][100];
int d[100];
/* initialize */

void bfs(int s){
    queue<int> q;
    q.push(s);
    for (int i = 0; i < n; ++i) d[i] = 1<<30;
    d[s] = 0;
    int u;
    while(!q.empty()){
        u = q.front(); q.pop();
        for (int i = 0; i < n; ++i) {
            if ( A[u][i] == 0 ) continue;
            if (d[i] != 1<<30) continue;
            d[i] = d[u] + 1;
            q.push(i);
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << i+1 << " " << ( (d[i] == 1<<30) ? -1 : d[i]) << "\n";
    }
}
/* main */
int main() {
    int u, k, v;
    cin >> n;
    for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) A[i][j] = 0;
    for (int i = 0; i < n; ++i) {
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            cin >> v;
            A[u-1][v-1] = 1;
        }
    }
    bfs(0);
    return 0;
}
