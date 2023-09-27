#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << "a ";
    std::cout << (a == b ? "==" : (a > b ? ">" : "<"));
    std::cout << " b" << std::endl;
    return 0;
}