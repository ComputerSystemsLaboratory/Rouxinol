#include <iostream>
#include <cctype>
int main() {
    int f[26] = { 0 };
    std::string s;
    while (std::cin >> s) {
        for (auto&& c: s) {
            if (!isalpha(c)) {
                continue;
            }
            ++f[tolower(c) - 'a'];
        }
    }
    for (int i = 0; i < 26; ++i) {
        std::cout << static_cast<char>('a' + i) << " : " << f[i] << std::endl;
    }
}

