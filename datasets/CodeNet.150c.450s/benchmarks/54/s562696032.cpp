#include <iostream>
#include <cstdlib>
#include <string>

std::string count(std::string s) {
    int len = (int)(s.length());
    int diff = int('a') - int('A');
    for (int i = 0; i < len; i++) {
        if ((int)(s[i]) >= int('A') && (int)(s[i]) <= int('Z')) {
            s[i] += diff;
        }
    }
    return s;
}


int main(void) {
    std::string def;
    std::cin >> def;
    def = count(def);
    int num = 0;
    std::string s;
    std::cin >> s;
    while(s != "END_OF_TEXT") {
        s = count(s);
        if (s == def) {
            num++;
        }
        std::cin >> s;
    }
    std::cout << num << std::endl;
    return EXIT_SUCCESS;
}