#include <iostream>

using namespace std;

#define SENTINEL 2000000000

struct Card {
    char suit;
    int value;
};

void merge(Card A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    Card L[n1];
    Card R[n2];
    for (int i = 0; i < n1; ++i) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; ++i) {
        R[i] = A[mid + i];
    }
    L[n1].value = SENTINEL;
    R[n2].value = SENTINEL;
    int i = 0;
    int j = 0;
    for (int k = left; k < right; ++k) {
        if (L[i].value <= R[j].value) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
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

int partition(Card A[], int p, int r) {
    Card t;
    Card x;
    x = A[r];
    int i = p - 1;
    for (int j = p; j < r; ++j) {
        if (A[j].value <= x.value) {
            ++i;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }
    t = A[i + 1];
    A[i + 1] = A[r];
    A[r] = t;
    return i + 1;
}

void quickSort(Card A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Card A[n];
    Card B[n];
    char S[10];
    int v;
    for (int i = 0; i < n; ++i) {
        scanf("%s %d", S, &v);
        A[i].suit = S[0];
        B[i].suit = S[0];
        A[i].value = v;
        B[i].value = v;
    }

    mergeSort(A, 0, n);
    quickSort(B, 0, n - 1);

    bool stable = true;
    for (int i = 0; i < n; ++i) {
        if (A[i].suit != B[i].suit) {
            stable = false;
        }
    }

    if (stable) {
        printf("Stable\n");
    } else {
        printf("Not stable\n");
    }
    
    for (int i = 0; i < n; ++i) {
        printf("%c %d\n", B[i].suit, B[i].value);
    }

    return 0;
}