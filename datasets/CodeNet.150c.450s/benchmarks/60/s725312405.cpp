#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

int main() {
    int n, u, k, v;
    cin >> n;

    int mat[n][n];
    REP(i, n) REP(j, n) mat[i][j] = 0;

    REP(i, n) {
        cin >> u >> k;
        u--;
        REP(j, k) {
            cin >> v;
            v--;
            mat[u][v] = 1;
        }
    }

    REP(i, n) {
        REP(j, n) {
            if (j) cout << " ";
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}
