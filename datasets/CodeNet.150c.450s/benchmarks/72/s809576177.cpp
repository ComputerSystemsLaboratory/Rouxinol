#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main()
{
    std::string line;
    std::getline(std::cin, line);

    for (int i = 0; i < line.length(); ++i) {
        char c = line[i];
        if ('a' <= c && c <= 'z') {
            c += ('Z' - 'z');
        } else if ('A' <= c && c <= 'Z') {
            c -= ('Z' - 'z');
        }
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}
