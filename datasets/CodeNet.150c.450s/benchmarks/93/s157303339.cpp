#include <iostream>

using namespace std;

struct card {
    char suit;
    int number;
    int order;

    bool operator<=(const card &other) { return this->number <= other.number; }
};

card deck[100010];

int partition(card a[], int p, int r) {
    card x = a[r];
    int i = p - 1;
    for (int j = p; j < r; ++j) if (a[j] <= x)swap(a[++i], a[j]);
    swap(a[++i], a[r]);
    return i;
}

void quickSort(card a[], int p, int r) {
    if (p >= r) return;
    int q = partition(a, p, r);
    quickSort(a, p, q - 1);
    quickSort(a, q + 1, r);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; deck[i].order = i++) cin >> deck[i].suit >> deck[i].number;
    quickSort(deck, 0, n - 1);
    int j = 0;
    for (; j < n; ++j) if (deck[j - 1].number == deck[j].number && deck[j - 1].order > deck[j].order) break;
    cout << (j == n ? "Stable" : "Not stable") << endl;
    for (int i = 0; i < n; ++i) printf("%c %d\n", deck[i].suit, deck[i].number);
    return 0;
}
