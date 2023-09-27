/* ITP1_9_C: Card Game */

#include <iostream>
#include <string>

const int WINNING_POINTS = 3;

int main() {
    std::ios::sync_with_stdio(false);

    std::string word1;
    std::string word2;
    int taro_points = 0, hanako_points = 0;
    int n_fights;

    std::cin >> n_fights;
    for (int i = 0; i < n_fights; i++) {
        std::cin >> word1 >> word2;
        if (word1 > word2) {
            taro_points += WINNING_POINTS;
        }
        else if (word1 < word2) {
            hanako_points += WINNING_POINTS;
        }
        else {
            taro_points++;
            hanako_points++;
        }
    }

    std::cout << taro_points << " " << hanako_points << std::endl;
    return 0;
}