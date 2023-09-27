#include <iostream>
using namespace std;

struct Card { char suit, value; };

void trace(int N, struct Card cards[]) {
    if (N <= 0) return;
    cout << cards[0].suit << cards[0].value;
    for (int i = 1; i < N; i++) {
        cout << " " << cards[i].suit << cards[i].value;
    }
    cout << endl;
}

void bubbleSort(int N, struct Card cards[]) {
    for (int i = 0; i < N; i++) {
        for (int j = N - 1; j > i; j--) {
            if ( cards[j].value < cards[j - 1].value ) {
                std::swap(cards[j], cards[j - 1]);
            }
        }
    }
}

void selectionSort(int N, struct Card cards[]) {
    for (int i = 0; i < N; i++) {
        int min_i = i;
        for (int j = i; j < N; j++) {
            if (cards[j].value < cards[min_i].value) {
                min_i = j;
            }
        }
        if (i < min_i) {
            std::swap(cards[i], cards[min_i]);
        }
    }
}

bool isStable(int N, struct Card bCards[], struct Card sCards[]) {
    for (int i = 0; i < N; i++) {
        Card bc = bCards[i];
        Card sc = sCards[i];
        if (bc.suit != sc.suit) {
            return false;
        }
    }
    return true;
}

/* ALDS1_2_C: Stable Sort */
int main() {
    int N;
    cin >> N;

    char suit, value;
    Card C1[N], C2[N];

    for (int i = 0; i < N; i++) {
        cin >> suit >> value;
        C1[i].suit  = C2[i].suit  = suit;
        C1[i].value = C2[i].value = value;
    }

    bubbleSort(N, C1);
    selectionSort(N, C2);
    string bStatus = "Stable";
    string sStatus = isStable(N, C1, C2) ? "Stable" : "Not stable";

    trace(N, C1);
    cout << bStatus << endl;
    trace(N, C2);
    cout << sStatus << endl;

    return 0;
}