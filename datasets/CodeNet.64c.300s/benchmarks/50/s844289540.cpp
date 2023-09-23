#include <iostream>
#include <utility>
static int bsort(int *a, int n) {
    bool f = true;
    int c = 0;
    while (f) {
        f = false;
        for (int i = n - 1; i > 0; --i) {
            if (a[i] < a[i - 1]) {
                std::swap(a[i], a[i - 1]);
                f = true;
                ++c;
            }
        }
    }
    return c;
}
int main() {
    int n, a[100];
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    int c = bsort(a, n);
    for (int i = 0; i < n; ++i) {
        std::cout << ((i == 0) ? "" : " ") << a[i];
    }
    std::cout << std::endl << c << std::endl;
}

