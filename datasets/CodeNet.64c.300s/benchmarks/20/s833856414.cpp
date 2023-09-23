#include <iostream>

int main(void) {
    int d;
    int s;
    int length;
    while (std::cin >> d) {
        s = 0;
        for (int i = 0; i < (600 / d); i++) {
            s += d * d * d * i * i;
        }
        std::cout << s << std::endl;
    }
    return 0;
}