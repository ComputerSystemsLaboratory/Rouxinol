#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> ada_mat(n, std::vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        int u, k, v;
        std::cin >> u >> k;
        for (int j = 0; j < k; j++) {
            std::cin >> v;
            ada_mat[u - 1][v - 1] = 1;
        }
    }

    for (auto && row : ada_mat) {
        for (int i = 0; i < n; i++) {
            if (i != 0) {
                std::cout << " ";
            }
            std::cout << row[i];
        }
        std::cout << std::endl;
    }
}

