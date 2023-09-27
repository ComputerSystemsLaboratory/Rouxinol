#include <iostream>
using namespace std;

struct Card {
    char trump;
    int num;
};

void BubbleSort(struct Card *c, int n);
void SelectionSort(struct Card *c, int n);
void printDeck(struct Card *c, int n);
bool isStable(struct Card *stable, Card *c, int n);

int main() {
    int n;
    struct Card c_b[36], c_s[36];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c_b[i].trump;
        cin >> c_b[i].num;
        c_s[i].trump = c_b[i].trump;
        c_s[i].num = c_b[i].num;
    }
    BubbleSort(c_b, n);
    SelectionSort(c_s, n);

    printDeck(c_b, n);
    cout << "Stable" << endl;
    printDeck(c_s, n);
    if (isStable(c_b, c_s, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
}

void BubbleSort(struct Card *c, int n) {
    struct Card tmp;
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) {
            if (c[j].num < c[j-1].num) {
                tmp = c[j];
                c[j] = c[j-1];
                c[j-1] = tmp;
            }
        }
    }
}

void SelectionSort(struct Card *c, int n) {
    int minj;
    struct Card tmp;
    for (int i = 0; i < n; i++) {
        minj = i;
        for (int j = i; j < n; j++) {
            if (c[j].num < c[minj].num) {
                minj = j;
            }
        }
        tmp = c[i];
        c[i] = c[minj];
        c[minj] = tmp;
    }
}

void printDeck(struct Card *c, int n) {
    int i;
    for (i = 0; i < n-1; i++) {
        cout << c[i].trump << c[i].num << " ";
    }
    cout << c[i].trump << c[i].num << endl;
}

bool isStable(struct Card *stable, struct Card *c, int n) {
    for (int i = 0; i < n; i++) {
        if ((stable[i].trump != c[i].trump) || (stable[i].num != c[i].num)) {
            return false;
        }
    }
    return true;
}