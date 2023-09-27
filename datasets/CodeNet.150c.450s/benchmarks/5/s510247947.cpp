/* ITP1_6_A: Reversing Numbers */

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    std::cout << array[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        std::cout << " " << array[i];
    }
    std::cout << std::endl;

    return 0;
}