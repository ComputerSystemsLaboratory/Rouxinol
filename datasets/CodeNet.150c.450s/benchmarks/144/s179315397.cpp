#include <iostream>
int main() {
    int n, m, l, a[100][100], b[100][100];
    std::cin >> n >> m >> l;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < l; ++j) {
            std::cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j) {
            long s = 0L;
            for (int k = 0; k < m; ++k) {
                s += a[i][k] * b[k][j];
            }
            if (j > 0) {
                std::cout << ' ';
            }
            std::cout << s;
        }
        std::cout << std::endl;
    }
}

