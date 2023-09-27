#include <iostream>
using namespace std;

struct Card {
    char value;
    char suit;
};

void swap(struct Card a[], int i, int j) {
    Card tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

void bubbleSort(struct Card a[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; i - 1 < j; --j) {
            if (a[j].value < a[j - 1].value) {
                swap(a, j, j - 1);
            }
        }
    }
}

void selectionSort(struct Card a[], int n) {
    for (int i = 0; i < n; ++i) {
        int minj = i;
        for (int j = i; j < n; ++j) {
            if (a[j].value < a[minj].value) minj = j;
        }
        swap(a, i, minj);
    }
}

void print(struct Card a[], struct Card b[], int n) {
    for (int i = 0; i < n; ++i) {
        if (a[i].suit != b[i].suit) {
            cout << "Not stable" << endl;
            return ;
        }
    }
    cout << "Stable" << endl;
}

int main() {

    int n;
    cin >> n;

    Card *card1 = new Card[n];
    for (int i = 0; i < n; ++i) {
        cin >> card1[i].suit >> card1[i].value;
    }

    Card *card2 = new Card[n];
    for (int i = 0; i < n; ++i) {
        card2[i] = card1[i];
    }

    bubbleSort(card1, n);

    for (int i = 0; i < n; ++i) {
        if (0 != i) cout << " ";
        cout << card1[i].suit << card1[i].value;
    }
    cout << endl;
    cout << "Stable" << endl;

    selectionSort(card2, n);

    for (int i = 0; i < n; ++i) {
        if (0 != i) cout << " ";
        cout << card2[i].suit << card2[i].value;
    }
    cout << endl;
    print(card1, card2, n);

    delete[] card1;
    delete[] card2;
    return 0;
}