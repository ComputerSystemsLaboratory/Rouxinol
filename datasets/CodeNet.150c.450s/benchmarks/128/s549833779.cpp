#include <iostream>
#include <string>

int main(void) {
    std::string s;
    std::string t = "";
    std::cin >> s;
    for (int i = s.length() - 1; i >= 0; i--) {
        t += s[i];
    }
    std::cout << t << std::endl;
    return 0;
}