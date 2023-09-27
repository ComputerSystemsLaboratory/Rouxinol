#include <iostream>
#include <map>
#include <string>
#include <functional>
static void e(int *a) {
    int t = a[1];
    a[1] = a[4];
    a[4] = a[6];
    a[6] = a[3];
    a[3] = t;
}
static void n(int *a) {
    int t = a[1];
    a[1] = a[2];
    a[2] = a[6];
    a[6] = a[5];
    a[5] = t;
}
static void s(int *a) {
    int t = a[1];
    a[1] = a[5];
    a[5] = a[6];
    a[6] = a[2];
    a[2] = t;
}
static void w(int *a) {
    int t = a[1];
    a[1] = a[3];
    a[3] = a[6];
    a[6] = a[4];
    a[4] = t;
}
int main() {
    std::map<char, std::function<void(int *)>> m = { { 'E', e }, { 'N', n }, { 'S', s }, { 'W', w } };
    int a[7];
    std::string op;
    for (int i = 1; i <= 6; ++i) {
        std::cin >> a[i];
    }
    std::cin >> op;
    for (auto&& e: op) {
        (m[e])(a);
    }
    std::cout << a[1] << std::endl;
}

