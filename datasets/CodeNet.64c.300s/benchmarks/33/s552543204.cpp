#include <iostream>
#include <string>

int main()
{
    while(1) {
        int a,c;
        char b;
        std::cin >> a >> b >> c;

        if (b == '?') {
            break;
        }

        if (b == '+') {
            std::cout << a + c << std::endl;
        }

        if (b == '-') {
            std::cout << a - c << std::endl;
        }

        if (b == '*') {
            std::cout << a * c << std::endl;
        }

        if (b == '/') {
            std::cout << a / c << std::endl;
        }
    }


    return 0;


}