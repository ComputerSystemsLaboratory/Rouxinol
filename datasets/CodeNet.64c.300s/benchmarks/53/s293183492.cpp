#include <iostream>

int main() {
    int a, b, c;
    int count = 0;

    std::cin >> a >> b >> c;

    if (a > b) {
        return 1;
    }

    for (int i = a; i <= b; ++i) {
        if (c % i == 0) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}