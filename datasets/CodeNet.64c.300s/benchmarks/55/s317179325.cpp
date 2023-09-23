#include <iostream>
int main() {
    int i = 1, n;
    for (std::cin >> n; n != 0; std::cin >> n) {
        std::cout << "Case " << i++ << ": " << n << std::endl;
    }
}

