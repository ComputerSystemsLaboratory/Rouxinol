#include <iostream>

constexpr int MAXN = 100;
int V[MAXN][MAXN];
int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int id, e_num;
        std::cin >> id >> e_num;
        for (int j = 0; j < e_num; j++) {
            int t;
            std::cin >> t;
            V[id - 1][t - 1] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j) std::cout << " ";
            std::cout << V[i][j];
        }
        std::cout << std::endl;
    }
}
