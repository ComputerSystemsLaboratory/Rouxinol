#include <iostream>

using namespace std;

struct Card {
    char suit;
    int value;
};

void print(Card a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i > 0) cout << " ";
        cout << a[i].suit << a[i].value;
    }
    cout << endl;
}

void bubbleSort(Card c[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j > i; --j) {
            if (c[j].value < c[j - 1].value) swap(c[j], c[j - 1]);
        }
    }
}

void selectionSort(Card c[], int n) {
    for (int i = 0; i < n; ++i) {
        int minj = i;
        for (int j = i; j < n; ++j) {
            if (c[j].value < c[minj].value) minj = j;
        }
        swap(c[i], c[minj]);
    }
}

bool isStable(Card c1[], Card c2[], int n) {
    for (int i = 0; i < n; ++i) {
        if (c1[i].suit != c2[i].suit) return false;
    }
    return true;
}

int main() {
    Card c1[100];
    Card c2[100];
    int n;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c1[i].suit >> c1[i].value;
    }

    copy(begin(c1), end(c1), begin(c2));

    bubbleSort(c1, n);
    selectionSort(c2, n);

    print(c1, n);
    cout << "Stable" << endl;
    print(c2, n);
    if (isStable(c1, c2, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}