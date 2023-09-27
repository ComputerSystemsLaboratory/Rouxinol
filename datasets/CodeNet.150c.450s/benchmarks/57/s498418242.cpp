#include <iostream>
int main() {
    int a, b;
    char op;
    for (std::cin >> a >> op >> b; op != '?'; std::cin >> a >> op >> b) {
        if (op == '+') {
            a += b;
        } else if (op == '-') {
            a -= b;
        } else if (op == '*') {
            a *= b;
        } else {
            a /= b;
        }
        std::cout << a << std::endl;
    }
}

