#include <iostream>
#include <algorithm>
int main() {
    std::string w, t, e = { "END_OF_TEXT" };
    int c = 0;
    std::cin >> w;
    for (std::cin >> t; t != e; std::cin >> t) {
        std::transform(t.begin(), t.end(), t.begin(), ::tolower);
        if (t == w) {
         ++c;
        }
    }
    std::cout << c << std::endl;
}

