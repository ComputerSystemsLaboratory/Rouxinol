#include <iostream>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

struct Card {
    char suit[2];
    int rank;
};

int n;
Card cards[100000];
map<int,int> hashing, hashing2;

inline void swap(Card& a, Card& b) {
    Card tmp = a;
    a = b;
    b = tmp;
}

inline int partition(int p, int r) {
    int i = p - 1;
    for (int j = p, x = cards[r].rank; j < r; ++j) {
        if (cards[j].rank <= x) {
            swap(cards[j], cards[++i]);
        }
    }
    swap(cards[r], cards[++i]);
    return i;
}

void quicksort(int p, int r) {
    if (p < r) {
        int q = partition(p, r);
        quicksort(p, q - 1);
        quicksort(q + 1, r);
    }
}

int main(void) {

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%s", cards[i].suit);
        scanf("%d", &cards[i].rank);
        hashing[cards[i].rank] = hashing[cards[i].rank] * 31
                            + (cards[i].suit[0] - 'A');
    }

    quicksort(0, n - 1);

    for (int i = 0; i < n; ++i) {
        hashing2[cards[i].rank] = hashing2[cards[i].rank] * 31
                             + (cards[i].suit[0] - 'A');
    }

    bool stable = true;
    for (int i = 0; i < n; ++i) {
        if (hashing[cards[i].rank] != hashing2[cards[i].rank]) {
            stable = false;
            break;
        }
    }

    printf("%s\n", stable ? "Stable" : "Not stable");
    for (int i = 0; i < n; ++i) {
        printf("%c %d\n", cards[i].suit[0], cards[i].rank);
    }

    return 0;
}