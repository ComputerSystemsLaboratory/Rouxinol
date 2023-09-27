#include <iostream>
#include <string>

int main()
{
    std::string in;
    std::cin >> in;

    for (int i = 0; i < in.size(); i++) {
        std::cout << in.at(in.size() - 1 - i);
    }
    std::cout << std::endl;

    return 0;
}