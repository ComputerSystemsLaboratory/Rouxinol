#include <iostream>

int main()
{
    int x, y;
    char op;
    while (1) {
        std::cin >> x;
        std::cin >> op;
        std::cin >> y;
        if (std::cin.good() == 0) {
            break;
        }
        switch (op) {
        case '+':
            std::cout << x + y << std::endl;
            break;
        case '-':
            std::cout << x - y << std::endl;
            break;
        case '*':
            std::cout << x * y << std::endl;
            break;
        case '/':
            std::cout << x / y << std::endl;
            break;
        default:
            break;
        }
    }
    return 0;
}