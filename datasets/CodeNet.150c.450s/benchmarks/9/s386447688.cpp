#include <iostream>

int main(int argc, const char *argv[]) {
    std::string str;
    int m, h;
    for ( ; std::cin >> str && str != "-"; ) {
        std::cin >> m;
        for (int i = 0; i < m; i++) {
            std::cin >> h;
            str = str.substr(h) + str.substr(0, h);
        }
        std::cout << str << std::endl;
    }
    return 0;
}