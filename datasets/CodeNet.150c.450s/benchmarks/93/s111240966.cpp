#include <iostream>
using namespace std;

#define LARGE 1000000001
#define N 100001

typedef struct _card {
    char mark;
    int value;
} Card;

void swap(Card A[], int i, int j) {
    Card temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

int partition(Card A[], int p, int r) {
    int x = A[r].value;
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j].value <= x) {
            i++;
            swap(A, i, j);
        }
    }

    swap(A, r, i+1);

    return i+1;
}

void quickSort(Card A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q + 1, r);
    }
}

void merge(Card A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;

    Card L[N / 2 + 2], R[N / 2 + 2];
    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    L[n1] = {' ', LARGE};
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }
    R[n2] = {' ', LARGE};

    int i = 0;
    int j = 0;
    for (int k = left; k < right; k++) {
        if (L[i].value <= R[j].value) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(Card A[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main() {
    int n;

    cin >> n;
    char mark;
    int value;
    Card A[N], B[N];
    for (int i = 0; i < n; i++) {
        cin >> mark;
        cin >> value;
        A[i] = {mark, value};
        B[i] = {mark, value};
    }

    quickSort(A, 0, n - 1);
    mergeSort(B, 0, n);

    bool stable = true;
    for (int i = 0; i < n; i++) {
        if (A[i].mark != B[i].mark) {
            stable = false;
        }
    }

    if (stable) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << A[i].mark << " " << A[i].value << endl;
    }
}
