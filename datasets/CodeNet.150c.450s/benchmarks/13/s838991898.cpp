#include <iostream>

int main(int argc, const char * argv[]) {
    std::string s, p;
    getline(std::cin, s);
    getline(std::cin, p);
    s += s.substr(0, p.length() - 1);
    if (s.find(p) != std::string::npos) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}