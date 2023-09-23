#include <iostream>
#include <algorithm>
int main() {
    long n, r0, r1, r, max, min;
    std::cin >> n; // skip
    std::cin >> r0 >> r1;
    max = r1 - r0;
    min = std::min(r0, r1);
    while (std::cin >> r) {
        max = std::max(max, r - min);
        min = std::min(min, r);
    }
    std::cout << max << std::endl;
}

