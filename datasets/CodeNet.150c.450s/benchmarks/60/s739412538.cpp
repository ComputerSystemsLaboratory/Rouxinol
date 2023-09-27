#include <iostream>
#include <vector>
using namespace std;

int G[101][101];

int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, k, v;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v;
            G[u - 1][v - 1] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << G[i][j];
            if (j < n -1) cout << " ";
            else cout << endl;
        }
    }
    return 0;
}