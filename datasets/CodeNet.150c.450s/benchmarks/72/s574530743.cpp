#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
int main() {
    std::string s;
    std::getline(std::cin, s);
    std::transform(s.begin(), s.end(), s.begin(), [](char c) {
            return std::isupper(c) ? std::tolower(c) : std::toupper(c);
    });
    std::cout << s << std::endl;
}

