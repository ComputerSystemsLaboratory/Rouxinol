#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            std::cout << " " << i;
            continue;
        }
        for (int x = i; x != 0; x /= 10) {
            if (x % 10 == 3) {
                std::cout << " " << i;
                break;
            }
        }
    }
    std::cout << std::endl;
    return 0;
}