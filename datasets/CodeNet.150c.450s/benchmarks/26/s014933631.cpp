#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a > b)
        std::cout << "a > b" << std::endl;
    else if (a == b)
        std::cout << "a == b" << std::endl;
    else
        std::cout << "a < b" << std::endl;
    return 0;
}
