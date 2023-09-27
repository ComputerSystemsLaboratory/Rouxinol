
 
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string str;
    int m;
    std::cin >> str >> m;

    for (int i = 0; i < m; i++) {
        std::string o;
        int a, b;
        std::cin >> o >> a >> b;
        if (o == "print")
            std::cout << str.substr(a, b - a + 1) << std::endl;
        else if (o == "replace") {
            std::string p;
            std::cin >> p;
            str.replace(str.begin() + a,  str.begin() + b + 1, p);
        } else if (o == "reverse")
            std::reverse(str.begin() + a, str.begin() + b + 1);
    }
    return 0;
}