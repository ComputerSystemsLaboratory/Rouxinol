#include <iostream>

using namespace std;

const int MAX_N = 100000;
const int SENTINEL = 1000000000;

struct Card {
    char suit;
    int value;
};

Card L[MAX_N / 2 + 2], R[MAX_N / 2 + 2];

void merge(Card A[], int n, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;

    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }

    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }

    L[n1].value = SENTINEL;
    R[n2].value = SENTINEL;
    int i = 0, j = 0;

    for (int k = left; k < right; k++) {
        if (L[i].value <= R[j].value) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
    }

}

void mergeSort(Card A[], int n, int left, int right) {
    int mid;
    if (left + 1 < right) {
        mid = (left + right) / 2;
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        merge(A, n, left, mid, right);
    }
}

int partition(Card A[], int p, int r) {
    Card x = A[r];
    int i = p - 1;
    Card temp;

    for (int j = p; j < r; j++) {
        if (A[j].value <= x.value) {
            i++;
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    }

    temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;

    return i + 1;
}

void quickSort(Card A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int main () {
    int n;
    Card A[MAX_N], B[MAX_N];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i].suit >> A[i].value;
        B[i].suit = A[i].suit;
        B[i].value = A[i].value;
    }

    quickSort(A, 0, n - 1);
    mergeSort(B, n, 0, n);

    bool stable = true;
    
    for (int i = 0; i < n; i++) {
        if (A[i].suit != B[i].suit) {
            stable = false;
        }
    }

    if (stable) {
        cout << "Stable" << endl;
    }
    else {
        cout << "Not stable" << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << A[i].suit << " " << A[i].value << endl;
    }

}