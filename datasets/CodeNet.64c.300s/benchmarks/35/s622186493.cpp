/* ALDS1_11_A: Graph */

#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int adjm[n + 1][n + 1];
    for (int row = 1; row <= n; row++)
        std::fill_n(adjm[row], n + 1, 0);

    int u, v, n_degrees;
    for (int i = 0; i < n; i++) {
        std::cin >> u >> n_degrees;
        for (int j = 0; j < n_degrees; j++) {
            std::cin >> v;
            adjm[u][v] = 1;
        }
    }

    for (int row = 1; row <= n; row++) {
        std::cout << adjm[row][1];
        for (int col = 2; col <= n; col++) {
            std::cout << " " << adjm[row][col];
        }
        std::cout << "\n";
    }


    return 0;
}