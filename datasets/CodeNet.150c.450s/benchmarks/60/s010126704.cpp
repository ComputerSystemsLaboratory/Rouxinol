#include <iostream>
#include <vector>
//#include "../cxx-prettyprint/prettyprint.hpp"

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> Adj;
    Adj.assign(n + 1, std::vector<int>(n + 1, 0));

    for (int i = 0; i < n; i ++) {
        int u, k;
        std::cin >> u >> k;
        for (int j = 0; j < k; j ++) {
            int a;
            std::cin >> a;
            Adj[u][a] = 1;
        }
    }

    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j ++) {
            if (j > 1) std::cout << " ";
            std::cout << Adj[i][j];
        }
        std::cout << std::endl;
    }
}

