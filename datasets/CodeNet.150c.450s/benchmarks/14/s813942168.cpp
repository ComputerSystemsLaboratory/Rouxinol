#include <iostream>
void call(int n);
int main() {
    int n;
    std::cin >> n;
    call(n);
}
void call(int n) {
    for (int i = 1, x = i; i <= n; ++i, x = i) {
        bool break_loop = false;
        if (x % 3 == 0) {
            std::cout << ' ' << i;
            continue;
        }
        for (; x; x /= 10) {
            if (break_loop) {
                break;
            }
            if (x % 10 == 3) {
                std::cout << ' ' << i;
                break_loop = true;
                continue;
            }
        }
    }
    std::cout << std::endl;
}

