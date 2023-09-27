#include <iostream>
int main() {
    int a, b;
    char op;
    while (true) {
        std::cin >> a >> op >> b;
        if (op == '?') break;
        int r;
        if (op == '+') r = a + b;
        else if (op == '-') r = a - b;
        else if (op == '*') r = a * b;
        else r = a / b;
        printf("%d\n", r);
    }
    return 0;
}