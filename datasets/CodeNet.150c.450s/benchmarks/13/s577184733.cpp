#include <iostream>
#include <cstdlib>

int main(void) {
    std::string s;
    std::string temp;
    std::string p;
    std::getline(std::cin, temp);
    std::getline(std::cin, p);
    s = temp + temp;
    int match = (int)(s.find(p));
    if (match == -1) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }
    return EXIT_SUCCESS;
}