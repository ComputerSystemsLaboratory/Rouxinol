//
// Created by tac on 2016/10/12.
//

#include <cstdlib>
#include <string>
#include <array>
#include <iostream>

const int SUIT_SIZE {4};
const int RANK_SIZE {13 + 1};
const std::array<std::string, SUIT_SIZE> INDEX_TO_SUIT {"S", "H", "C", "D"};

int suit_to_index(std::string suit) {
    int index;
    if (suit == "S") {
        index = 0;
    } else if (suit == "H") {
        index = 1;
    } else if (suit == "C") {
        index = 2;
    } else if (suit == "D") {
        index = 3;
    } else {
        throw std::runtime_error("");
    }
    return index;
}

std::string index_to_suit(int index) {
    return INDEX_TO_SUIT[index];
}

int main() {
    std::array<std::array<bool, RANK_SIZE>, SUIT_SIZE> cards;
    for (int i = 0; i < SUIT_SIZE; ++i) {
        for (int j = 0; j < RANK_SIZE; ++j) {
            cards[i][j] = false;
        }
    }

    int n;
    std::string suit;
    int rank;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> suit >> rank;
        cards[suit_to_index(suit)][rank] = true;
    }

    for (int i = 0; i < SUIT_SIZE; ++i) {
        for (int j = 1; j < RANK_SIZE; ++j) {
            if (!cards[i][j]) {
                std::cout << index_to_suit(i) << " " << j << std::endl;
            }
        }
    }
    return EXIT_SUCCESS;
}