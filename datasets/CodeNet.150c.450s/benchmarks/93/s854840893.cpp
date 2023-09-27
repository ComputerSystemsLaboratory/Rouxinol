#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

constexpr int MAX_N = 100'000;
constexpr int MAX_VAL = 100'000;

struct Card {
    char soot;
    int key;
    void print() {
        cout << this->soot << " " << this->key << endl;
    }
};

int partition(Card* A, const int& p, const int& r) {
    int x = A[r].key;
    int i = p;
    for (int j = p; j < r; j++) {
        if (A[j].key <= x) {
            swap(A[i], A[j]);
            i++;
        }
    }
    swap(A[i], A[r]);
    return i;
}

void quickSort(Card* A, const int& p, const int& r) {
    if (p >= r) { return; }
    int q = partition(A, p, r);
    quickSort(A, p, q-1);
    quickSort(A, q+1, r);
}

int merge(Card* A, const int& left, const int& mid, const int& right) {
    const int n1 = mid - left;
    const int n2 = right - mid;

    auto L = new Card[n1+1];
    auto R = new Card[n2+1];
    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }

    L[n1].key = MAX_VAL;
    R[n2].key = MAX_VAL;

    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i].key <= R[j].key) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
    delete[] L;
    delete[] R;
    return right - left;
}

int mergeSort(Card* A, const int& left, const int& right) {
    int count = 0;
    if (left + 1 < right) {
        const int mid = (left + right) / 2;
        count += mergeSort(A, left, mid);
        count += mergeSort(A, mid, right);
        return count + merge(A, left, mid, right);
    }
    return 0;
}


int main() {
    ios::sync_with_stdio(false);

    Card A[MAX_N];
    Card B[MAX_N];

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i].soot >> A[i].key;
        B[i] = A[i];
    }

    quickSort(A, 0, n-1);
    mergeSort(B, 0, n);

    bool isStable = true;
    for (int i = 0; i < n; i++) {
        if (A[i].soot != B[i].soot) {
            isStable = false;
            break;
        }
    }
    if (isStable) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    for (int i = 0; i < n; i++) {
        A[i].print();
    }

    return 0;
}