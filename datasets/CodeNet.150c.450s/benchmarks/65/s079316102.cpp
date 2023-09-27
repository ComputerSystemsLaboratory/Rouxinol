#include <iostream>

using namespace std;

struct Card {
    char suit, value;
};

static const int MAX = 36;

void bubbleSort(struct Card card[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j >= i + 1; j--) {
            if (card[j].value < card[j - 1].value) {
                swap(card[j], card[j - 1]);
            }
        }
    }
}

void selectionSort(struct Card card[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minj = i;
        for (int j = i; j < n; j++) {
            if (card[minj].value > card[j].value) minj = j;
        }
        swap(card[minj], card[i]);
    }
}

bool isStable(struct Card c1[], Card c2[], int n) {
    for (int i = 0; i < n; i++) {
        if (c1[i].suit != c2[i].suit) return false;
    }
    return true;
}

void output(struct Card c[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << c[i].suit << c[i].value;
    }
    cout << endl;
}

int main() {
    Card c1[MAX], c2[MAX];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> c1[i].suit >> c1[i].value;
    for (int i = 0; i < n; i++) c2[i] = c1[i]; // copied

    bubbleSort(c1, n);
    output(c1, n);
    cout << "Stable" << endl;

    selectionSort(c2, n);
    output(c2, n);
    if (isStable(c1, c2, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    return 0;
}
