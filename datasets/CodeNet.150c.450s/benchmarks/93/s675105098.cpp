#include<stdio.h>
#include<iostream>

#define SENTINEL 1000000001

struct Card {
    char suit;
    int value;
};

void trace(Card a[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%c %d\n", a[i].suit, a[i].value);
    }
}

void Merge(Card A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    Card L[n1+1], R[n2+1];
    for (int i = 0; i < n1; ++i) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; ++i) {
        R[i] = A[mid + i];
    }
    L[n1].value = SENTINEL;
    R[n2].value = SENTINEL;
    int m = 0;
    int n = 0;
    for (int i = left; i < right; ++i) {
        if (L[m].value <= R[n].value) {
            A[i] = L[m];
            ++m;
        }
        else {
            A[i] = R[n];
            ++n;
        }
    }
}

void MergeSort(Card A[], int left, int right) {
    if (left >= right - 1) return;
    int mid = (left + right) / 2;
    MergeSort(A, left, mid);
    MergeSort(A, mid, right);
    Merge(A, left, mid, right);
}

int Partition(Card A[], int p, int r) {
    int x = A[r].value;
    int j = p;
    for (int i = p; i < r; ++i) {
        if (A[i].value <= x) {
            std::swap(A[j], A[i]);
            ++j;
        }
    }
    std::swap(A[j], A[r]);
    return j;
}

void QuickSort(Card A[], int p, int r) {
    if (p >= r) return;
    int q = Partition(A, p, r);
    QuickSort(A, p, q-1);
    QuickSort(A, q+1, r);
}

bool IsStable (Card A[], Card B[], int N) {
    for (int i = 0; i < N; ++i) {
        if (A[i].suit != B[i].suit || A[i].value != B[i].value) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    Card A[100000], B[100000];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i].suit >> A[i].value;
        B[i] = A[i];
    }

    MergeSort(A, 0, N);
    QuickSort(B, 0, N - 1);
    IsStable(A, B, N) ? printf("Stable\n") : printf("Not stable\n");
    trace(B, N);
    return 0;
}