#include <cstdlib>
#include <iostream>

int rectangle_area(int a, int b) {
    return a * b;
}

int rectangle_length(int a, int b) {
    return a + a + b + b;
}

int main() {
    int a;
    int b;

    std::cin >> a;
    std::cin >> b;

    std::cout << rectangle_area(a, b) << " " << rectangle_length(a, b) << std::endl;

    return EXIT_SUCCESS;
}