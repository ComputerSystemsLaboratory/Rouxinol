#include <iostream>
using ll = long long;
using namespace std;

/* initialize */
int n;
ll d[100][100];

void floyd() {
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            if (d[i][k] == INT64_MAX) continue;
            for (int j = 0; j < n; ++j) {
                if (d[k][j] == INT64_MAX) continue;
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

/* main */
int main() {
    int e, u, v, c;
    cin >> n >> e;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            d[i][j] = ((i == j) ? 0 : INT64_MAX);
        }
    }
    for (int i = 0; i < e; ++i) {
        cin >> u >> v >> c;
        d[u][v] = c;
    }
    floyd();
    
    bool negative = false;
    for (int i = 0; i < n; ++i) if (d[i][i]<0) negative = true;
    if(negative){
        cout << "NEGATIVE CYCLE" << "\n";
    } else {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j) cout << " ";
                if ( d[i][j] == INT64_MAX) cout << "INF";
                else cout << d[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
