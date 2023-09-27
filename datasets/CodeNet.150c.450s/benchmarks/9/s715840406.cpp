/* ITP1_9_B: Shuffle */

#include <iostream>
#include <string>
using std::string;

int main() {
    std::ios::sync_with_stdio(false);
    string cards, subcards;
    int n_shuffles, length;

    while(std::cin) {
        std::cin >> cards;
        if (cards == "-") break;

        std::cin >> n_shuffles;
        for (int i = 0; i < n_shuffles; i++) {
            std::cin >> length;
            subcards = cards.substr(0, length);
            cards = cards.substr(length) + subcards;
        }
        std::cout << cards << "\n";
    }

    return 0;
}