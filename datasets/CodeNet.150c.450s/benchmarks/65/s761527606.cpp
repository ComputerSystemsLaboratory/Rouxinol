#include <iostream>
using namespace std;

struct Card { char suit, value; };

void bubbleSort(struct Card C[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (C[j].value < C[j-1].value) {
                swap(C[j], C[j-1]);
            }
        }
    }
}

void selectionSort(Card C[], int n) {
    for (int i = 0; i < n; i++) {
        int minj = i;
        for (int j = i; j < n; j++) {
            if (C[j].value < C[minj].value) {
                minj = j;
            }
        }
        swap(C[i], C[minj]);
    }
}

void output(struct Card C[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << C[i].suit << C[i].value;
    }
    cout << endl;
}

bool isStable(struct Card C1[], struct Card C2[], int n) {
    for (int i = 0; i < n; i++) {
        if (C1[i].value == C2[i].value && C1[i].suit != C2[i].suit) {
            return false;
        }
    }
    return true;
}

int main () {
    int n;
    cin >> n;
    Card C1[n], C2[n];

    for (int i = 0; i < n; i++) {
        cin >> C1[i].suit >> C1[i].value;
        C2[i] = C1[i];
    }

    bubbleSort(C1, n);
    output(C1, n);
    cout << "Stable" << endl;
    selectionSort(C2, n);
    output(C2, n);
    if (isStable(C1, C2, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}