/* ITP1_9_C: Card Game */

#include <iostream>

enum Result { P1_WIN, P2_WIN, DRAW };

const int WINNING_POINTS  = 3;
const int MAX_WORD_LENGTH = 100;

Result fight(char *w1, char *w2) {
    for (int i = 0; w1[i] || w2[i]; i++) {
        if (! w2[i] || w1[i] > w2[i])
            return P1_WIN;

        if (! w1[i] || w1[i] < w2[i])
            return P2_WIN;
    }
    return DRAW;
}

int main() {
    std::ios::sync_with_stdio(false);

    char word1[MAX_WORD_LENGTH + 1];
    char word2[MAX_WORD_LENGTH + 1];
    int taro_points   = 0;
    int hanako_points = 0;
    int n_fights;

    std::cin >> n_fights;
    for (int i = 0; i < n_fights; i++) {
        std::cin >> word1 >> word2;
        Result result = fight(word1, word2);

        switch (result) {
        case P1_WIN:
            taro_points += WINNING_POINTS;
            break;
        case P2_WIN:
            hanako_points += WINNING_POINTS;
            break;
        case DRAW:
            taro_points++;
            hanako_points++;
            break;
        }
    }

    std::cout << taro_points << " " << hanako_points << std::endl;
    return 0;
}