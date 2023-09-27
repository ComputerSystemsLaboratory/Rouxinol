#include <iostream>
using namespace std;

#define SIZE 100100
#define INF 1001001001

int n;
pair<char, int> card1[SIZE], card2[SIZE], L[SIZE / 2], R[SIZE / 2];

int partition(int p, int r) {
    int x = card1[r].second;
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (card1[j].second <= x) {
            i++;
            swap(card1[i], card1[j]);
        }
    }
    swap(card1[i + 1], card1[r]);
    return i + 1;
}

void quickSort(int p, int r) {
    if (p >= r) return;
    int q = partition(p, r);
    quickSort(p, q - 1);
    quickSort(q + 1, r);
    return;
}

void merge(int left, int middle, int right) {
    int n1 = middle - left, n2 = right - middle;
    for (int i = 0; i < n1; i++) L[i] = card2[left + i];
    for (int i = 0; i < n2; i++) R[i] = card2[middle + i];
    L[n1].second = R[n2].second = INF;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i].second <= R[j].second) {
            card2[k] = L[i];
            i++;
        } else {
            card2[k] = R[j];
            j++;
        }
    }
    return;
}

void mergeSort(int left, int right) {
    if (right - left <= 1) return;
    int middle = (left + right) / 2;
    mergeSort(left, middle);
    mergeSort(middle, right);
    merge(left, middle, right);
    return;
}

int main() {
    cin >> n;
    char suit;
    int value;
    for (int i = 0; i < n; i++) {
        cin >> suit >> value;
        card1[i] = card2[i] = make_pair(suit, value);
    }

    quickSort(0, n - 1);
    mergeSort(0, n);

    bool ans = true;
    for (int i = 0; i < n; i++) {
        if (card1[i].first != card2[i].first) ans = false;
    }

    cout << (ans ? "Stable" : "Not stable") << endl;
    for (int i = 0; i < n; i++) {
        cout << card1[i].first << " " << card1[i].second << endl;
    }
    return 0;
}
