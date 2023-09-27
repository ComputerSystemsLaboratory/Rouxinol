#include <iostream>
void p(int a, int b, int c) {
    std::cout << a << ' ' << b << ' ' << c << std::endl;
}
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b) {
        if (b > c) {
            p(c, b, a);
        } else {
            if (a > c) {
                p(b, c, a);
            } else {
                p(b, a, c);
            }
        }
    } else {
        if (b > c) {
            if (a > c) {
                p(c, a, b);
            } else {
                p(a, c, b);
            }
        } else {
            p(a, b, c);
        }
    }
}

