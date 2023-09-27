/* ALDS1_6_C: Quick Sort */

#include <iostream>

struct Card {
    char suit;
    int number;
    int order;
};

int partition(Card cards[], int p, int r) {
    int pivot_num = cards[r].number;
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (cards[j].number <= pivot_num) {
            i++;
            std::swap(cards[i], cards[j]);
        }
    }
    std::swap(cards[i + 1], cards[r]);
    return i + 1;
}

void quick_sort(Card cards[], int p, int r) {
    if (r <= p) return;
    int q = partition(cards, p, r);
    quick_sort(cards, p, q - 1);
    quick_sort(cards, q + 1, r);
}

bool is_stable(int n_cards, Card cards[]) {
    for (int i = 0; i < n_cards; i++) {
        Card c1 = cards[i];
        Card c2 = cards[i + 1];
        if (c1.number == c2.number && c2.order < c1.order)
            return false;
    }
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);

    int n_cards;
    std::cin >> n_cards;

    int number;
    char suit;
    Card cards[n_cards + 1];
    for (int i = 0; i < n_cards; i++) {
        std::cin >> cards[i].suit >> cards[i].number;
        cards[i].order = i;
    }
    Card guard = { '-', 0, 0 };
    cards[n_cards] = guard;

    quick_sort(cards, 0, n_cards - 1);
    bool stable = is_stable(n_cards, cards);

    std::cout << (stable ? "Stable" : "Not stable") << "\n";
    for (int i = 0; i < n_cards; i++) {
        std::cout << cards[i].suit << " " << cards[i].number << "\n";
    }
    return 0;
}