#include <iostream>

using namespace std;

int G[101][101];

int main() {

    int n;
    cin >> n;

    fill(G[0], G[101], 0);

    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            G[u][v] = 1;
        }
    }


    for (int i = 1; i <= n; i++) {
        int k = 0;
        for (int j = 1; j <= n; j++) {
            if (k++) cout << " ";
            cout << G[i][j];
        }
        cout << endl;
    }
}
