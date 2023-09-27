#include <iostream>
int main() {
    int n, x;
    for (std::cin >> n >> x; n != 0 || x != 0; std::cin >> n >> x) {
        int c = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                for (int k = j + 1; k <= n; ++k) {
                    if (i + j + k == x) {
                        ++c;
                    }
                }
            }
        }
        std::cout << c << std::endl;
    }
}

