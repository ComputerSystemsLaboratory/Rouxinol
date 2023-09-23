#include <iostream>
int main() {
    long n, min, max, sum = 0;
    bool first = true;
    std::cin >> n; // skip
    while (std::cin >> n) {
        if (first) {
            first = false;
            min = max = n;
            sum += n;
            continue;
        }
        if (n < min) {
            min = n;
        }
        if (n > max) {
            max = n;
        }
        sum += n;
    }
    std::cout << min << ' ' << max << ' ' << sum << std::endl;
}

