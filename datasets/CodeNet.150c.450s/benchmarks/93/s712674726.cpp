#include<iostream>
#include<cstdio>
#define NUM 100000
#define MAX 2000000000

using namespace std;

struct Card {
    char suit;
    int value;
};

struct Card L[NUM / 2 + 2], R[NUM / 2 + 2];

int partition(struct Card A[], int p, int r) {
    struct Card x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j].value <= x.value) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void quickSort(struct Card A[], int N, int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, N, p, q - 1);
        quickSort(A, N, q + 1, r);
    }
}

void merge(struct Card A[], int N, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;

    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }
    L[n1].value = R[n2].value = MAX;
    
    int j = 0;
    int k = 0;
    for (int i = left; i < right; i++) {
        if (L[j].value <= R[k].value) {
            A[i] = L[j++];
        } else {
            A[i] = R[k++];
        }
    }
}

void mergeSort(struct Card A[], int N, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, N, left, mid);
        mergeSort(A, N, mid, right);
        merge(A, N, left, mid, right);
    }
}

int main() {
    int N, v;
    char s[10];
    Card A[NUM], B[NUM];
    int stable = 1;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s >> v;
        A[i].suit = B[i].suit = s[0];
        A[i].value = B[i].value = v;
    }

    mergeSort(A, N, 0, N);
    quickSort(B, N, 0, N - 1);

    for (int i = 0; i < N; i++) {
        if (A[i].suit != B[i].suit) stable = 0;
    }

    if (stable == 1) {
        printf("Stable\n");
    } else {
        printf("Not stable\n");
    }

    for (int i = 0; i < N; i++) {
        printf("%c %d\n", B[i].suit, B[i].value);
    }

    return 0;
}
