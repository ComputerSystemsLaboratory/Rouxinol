#include <iostream>
int main() {
    int n, m, a[100][100], b[100];
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }
    for (int i = 0, c = 0; i < n; ++i, c = 0) {
        for (int j = 0; j < m; ++j) {
            c += a[i][j] * b[j];
        }
        std::cout << c << std::endl;
    }
}

