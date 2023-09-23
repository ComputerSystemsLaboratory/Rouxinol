#include <iostream>
using namespace std;

int main() {
    int N;
    int G[101][101];
    cin >> N;
    for (int j = 0; j <= N; ++j) for (int k = 0; k <= N; ++k) G[j][k] = 0;
    for (int _ = 0; _ < N; ++_) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            int v; cin >> v;
            G[u][v] = 1;
        }
    }

    for (int j = 1; j <= N; ++j) {
        for (int k = 1; k <= N; ++k) {
            if (k > 1) cout << " ";
            cout << G[j][k];
        }
        cout << endl;
    }

    return 0;
}