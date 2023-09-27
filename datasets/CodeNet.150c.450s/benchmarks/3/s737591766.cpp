#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main()
{
    std::string str;
    std::size_t q;
    std::cin >> str >> q;

    for (std::size_t i = 0; i < q; ++i) {
        std::string command;
        std::size_t a, b;
        std::cin >> command;
        if (command == "replace") {
            std::string p;
            std::cin >> a >> b >> p;

            for (std::size_t j = a; j <= b; ++j) {
                str[j] = p[j-a];
            }

        } else if (command == "reverse") {
            std::cin >> a >> b;

            for (std::size_t j = 0; j <= (b -a)/2; ++j) {
                std::swap(str[a + j], str[b - j]);
            }

        } else if (command == "print") {
            std::cin >> a >> b;
            std::cout << str.substr(a, b-a+1) << std::endl;
        }
    }

    return 0;
}
