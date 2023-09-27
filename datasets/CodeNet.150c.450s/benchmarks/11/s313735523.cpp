#include <iostream>
#include <array>
#include <map>
int main() {
    std::array<std::array<bool, 14>, 4> cards;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 14; ++j) {
            cards[i][j] = false;
        }
    }
    std::map<std::string, int> suit = { { "S", 0 }, { "H", 1 }, { "C", 2 }, { "D", 3 } };
    std::array<std::string, 4> rev = { "S", "H", "C", "D" };
    int n;
    std::cin >> n; // skip
    std::string s;
    while (std::cin >> s >> n) {
        cards[suit[s]][n] = true;
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 1; j < 14; ++j) {
            if (cards[i][j]) {
                continue;
            }
            std::cout << rev[i] << ' ' << j << std::endl;
        }
    }
}

