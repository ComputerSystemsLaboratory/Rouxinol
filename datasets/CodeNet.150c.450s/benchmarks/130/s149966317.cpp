#include <iostream>

int main(int argc, const char * argv[]) {
    int n, m;
    std::cin >> n >> m;
    int a[n][m], b[m], c;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            std::cin >> a[j][i];
        }
    }
    for (int j = 0; j < m; j++) {
        std::cin >> b[j];
    }
    for (int j = 0; j < n; j++) {
        c = 0;
        for (int i = 0; i < m; i++) {
            c += a[j][i] * b[i];
        }
        std::cout << c << std::endl;
    }
    return 0;
}