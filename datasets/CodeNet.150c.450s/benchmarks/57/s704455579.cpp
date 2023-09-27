#include <iostream>

int main(void)
{
    while(true) {
        int a, b;
        char op;
        std::cin >> a >> op >> b;
        if(op == '?') { break; }
        int result = 0;
        switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            break;
        }
        std::cout << result << std::endl;
    }
    return 0;
}