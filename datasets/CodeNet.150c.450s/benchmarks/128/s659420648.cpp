#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    std::cin >> str;

    std::reverse(str.begin(), str.end());
    std::cout << str << std::endl;

    return 0;
}