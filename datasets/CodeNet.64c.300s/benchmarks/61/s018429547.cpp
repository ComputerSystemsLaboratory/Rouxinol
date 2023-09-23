#include <iostream>
int main() {
    int r, c, a[100] = { 0 }, s = 0;
    std::cin >> r >> c;
    for (int i = 0; i < r; ++i, s = 0) {
        for (int j = 0, n; j < c; ++j) {
            std::cin >> n;
            std::cout << n << ' ';
            a[j] += n;
            s += n;
        }
        std::cout << s << std::endl;
    }
    for (int i = 0; i < c; ++i) {
        s += a[i];
        std::cout << a[i] << ' ';
    }
    std::cout << s << std::endl;
}

