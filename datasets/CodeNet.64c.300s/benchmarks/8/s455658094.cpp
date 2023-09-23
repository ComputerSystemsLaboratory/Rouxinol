#include <iostream>

int main() {

    int i = 1;
    int n, x;
    std::cin >> n;

    do {
        x = i;
        if (x % 3 == 0) {
            std::cout << " " << i;
            continue;
        }
        for (x; x != 0; x /= 10) {
            if (x % 10 == 3) {
                std::cout << " " << i;
                break;
            }
        }
    } while (++i <= n);
    std::cout << std::endl;
    return 0;
}