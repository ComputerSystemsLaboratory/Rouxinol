#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    std::cout << "a";

    if (a > b) {
        std::cout << " > ";
    } else if (a < b) {
        std::cout << " < ";
    } else {
        std::cout << " == ";
    }

    std::cout << "b" << std::endl;

    return 0;
}