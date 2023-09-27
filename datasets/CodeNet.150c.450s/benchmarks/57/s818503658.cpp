#include <iostream>

int main()
{
    int a, b;
    char op;

    while (1) {
        std::cin >> a >> op >> b;
        int result = 0;
        if (op == '+') {
            result = a + b;
        } else if (op == '-') {
            result = a - b;
        } else if (op == '*') {
            result = a * b;
        } else if (op == '/') {
            result = a / b;
        } else if (op == '?') {
            break;
        } else {
            std::cout << "ERROR! You input wrong operator." << std::endl;
        }
        std::cout << result << std::endl;
    }

    return 0;
}