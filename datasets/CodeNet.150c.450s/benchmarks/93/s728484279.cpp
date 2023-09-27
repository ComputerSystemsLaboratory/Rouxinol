/* ALDS1_6_C: Quick Sort */

#include <iostream>
#include <queue>
#include <map>
using std::map;
using std::queue;

struct Card { char suit; int number; };

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

bool is_stable(int n_cards, Card cards[], map< int, queue<int> >& orders) {
    for (int i = 0; i < n_cards; i++) {
        int number = cards[i].number;
        char c = orders[number].front();
        if (c != cards[i].suit)
            return false;
        orders[number].pop();
    }
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);

    int n_cards;
    std::cin >> n_cards;

    map< int, queue<int> > orders;
    int number;
    char suit;
    Card cards[n_cards];
    for (int i = 0; i < n_cards; i++) {
        std::cin >> cards[i].suit >> cards[i].number;
        orders[ cards[i].number ].push( cards[i].suit );
    }

    quick_sort(cards, 0, n_cards - 1);
    bool stable = is_stable(n_cards, cards, orders);

    std::cout << (stable ? "Stable" : "Not stable") << "\n";
    for (int i = 0; i < n_cards; i++) {
        std::cout << cards[i].suit << " " << cards[i].number << "\n";
    }
    return 0;
}