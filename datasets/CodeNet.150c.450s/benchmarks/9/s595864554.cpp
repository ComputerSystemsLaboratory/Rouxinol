#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <sstream>

void shuffle(std::string& cards, std::size_t h)
{
    std::stringstream ss;
    for (std::size_t i = 0; i < h; ++i) {
        ss << cards[i];
    }
    cards.erase(0, h);
    cards.append(ss.str());
}

int main()
{
    while (true) {
        std::string cards;
        std::cin >> cards;
        if (cards == "-") {
            break;
        }

        std::size_t m, h;
        std::cin >> m;
        for (std::size_t i = 0; i < m; ++i) {
            std::cin >> h;
            shuffle(cards, h);
        }

        std::cout << cards << std::endl;
    }

    return 0;
}
