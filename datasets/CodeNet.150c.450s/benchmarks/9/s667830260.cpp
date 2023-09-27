#include <iostream>
#include <algorithm>
#include <string>

std::string shufle(std::string str, int n) {
    std::string temp;
    temp = str.substr(0, n);
    str = str.substr(n, str.size() - n) + temp;
    return str;
}

int main() {
    while (true) {
        std::string str;
        std::cin >> str;
        if(str=="-")
            break;
        int m;
        std::cin >> m;
        for (int i = 0; i < m; i++) {
            int n = 0;
            std::cin >> n;
            str = shufle(str, n);
        }
        std::cout << str << std::endl;
    }
    return 0;
}