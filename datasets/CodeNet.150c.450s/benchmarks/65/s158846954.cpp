#include <iostream>
#include <utility>
#include <tuple>
#include <vector>

void DisplayCards(std::vector<std::tuple<char, int>>& cards) {
    for (int i = 0; i < cards.size(); i++) {
        std::cout << std::get<0>(cards[i])
                  << std::get<1>(cards[i]);
        if (i != cards.size() - 1 ) {
            std::cout << " ";
        }
        else {
            std::cout << std::endl;
        }
    }
}

std::vector<std::tuple<char, int>> GetInput() {
    int n;
    std::cin >> n;
    std::vector<std::tuple<char, int>> cards;
    for (int i=0; i<n; i++) {
        std::tuple<char, int> card;
        std::cin >> std::get<0>(card);
        std::cin >> std::get<1>(card);
        cards.push_back(card);
    }

    return cards;
}

std::vector<std::tuple<char, int>> BubbleSort(std::vector<std::tuple<char, int>> ary) {
    int n = ary.size();
    for(int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) {
            if(std::get<1>(ary[j]) < std::get<1>(ary[j-1])) {
                std::swap(ary[j], ary[j-1]);
            }
        }
    }
    return ary;
}

std::vector<std::tuple<char, int>> SelectionSort(std::vector<std::tuple<char, int>> ary) {
    int n = ary.size();
    for (int i = 0; i < n; i++) {
        int min_ix = i;
        for (int j = i; j < n; j++) {
            if (std::get<1>(ary[j]) < std::get<1>(ary[min_ix])) {
                min_ix = j;
            }
        }
        if (i != min_ix) {
            std::swap(ary[i], ary[min_ix]);
        }
    }
    return ary;
}

void IsStable(std::vector<std::tuple<char, int>> ary1,
              std::vector<std::tuple<char, int>> ary2
              )
{
    if (ary1.size() != ary2.size()) {
        std::cout << "Size is not equal." << std::endl;
    }
    int n = ary1.size();

    for (int i = 0; i < n; i++) {
        if(ary1[i] !=  ary2[i]) {
            std::cout << "Not stable" << std::endl;
            return;
        }
    }
    std::cout << "Stable" << std::endl;
}

int main(int argc, char const* argv[])
{
    auto cards = GetInput();
    auto b_cards = BubbleSort(cards);
    DisplayCards(b_cards);
    std::cout << "Stable" << std::endl;
    auto i_cards = SelectionSort(cards);
    DisplayCards(i_cards);
    IsStable(b_cards, i_cards);
    return 0;
}