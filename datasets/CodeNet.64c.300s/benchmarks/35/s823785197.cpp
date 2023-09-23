#include<iostream>
using namespace std;

int main() {
    int adj_matrix[101][101] = {0};
    int n, u, v, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v;
            adj_matrix[u - 1][v - 1] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj_matrix[i][j] << (j != n - 1 ? " " : "\n");
        }
    }

    return 0;
}
