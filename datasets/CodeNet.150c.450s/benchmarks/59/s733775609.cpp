#include <iostream>
static void p(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << ((i != 0) ? " " : "") << a[i];
    }
    std::cout << std::endl;
}
static void isort(int *a, int n) {
    p(a, n);
    for (int i = 1; i < n; ++i) {
        int v = a[i];
        int j = i - 1;
        for (; j >= 0 && a[j] > v; --j) {
            a[j + 1] = a[j];
        }
        a[j + 1] = v;
        p(a, n);
    }
}
int main() {
    int n, a[1001];
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    isort(a, n);
}

