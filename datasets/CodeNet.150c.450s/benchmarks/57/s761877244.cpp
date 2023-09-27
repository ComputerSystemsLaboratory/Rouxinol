#include <iostream>

int main(void)
{
    int a, b;
    int result;
    char c;
    while (true) {
        std::cin >> a;
        std::cin >> c;
        std::cin >> b;
        if (c == '?') {
            break;
        }
        if (c == '+') {
            result = a + b;
        } else if (c == '-') {
            result = a - b;
        } else if (c == '*') {
            result = a * b;
        } else if (c == '/') {
            result = (int)(a / b);
        } 
        std::cout<< result <<std::endl;
    }
    return 0;
}