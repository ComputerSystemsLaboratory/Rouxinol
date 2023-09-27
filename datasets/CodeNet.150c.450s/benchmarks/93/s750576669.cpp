#include <cstdio>
#include <algorithm>
using namespace std;
#define INF 1234567890;

struct Card {
    char suit;
    int value;
};

Card L[100000], R[100000];

void merge(Card A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1].value = INF;
    R[n2].value = INF;

    int i = 0;
    int j = 0;

    for (int k = left; k < right; k++) {
        if (L[i].value <= R[j].value) A[k] = L[i++];
        else A[k] = R[j++];
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
    int x = A[r].value;
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j].value <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i + 1;
}

void quickSort(Card A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int isStable(Card A1[], Card A2[], int n) {
    for (int i = 0; i < n; i++) {
        if (A1[i].suit != A2[i].suit) return 0;
    }
    return 1;
}

int main(void) {
    int n, i;
    Card A1[150000];
    Card A2[150000];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %d", &A1[i].suit, &A1[i].value); 
        A2[i].suit = A1[i].suit;
        A2[i].value = A1[i].value;
    }

    quickSort(A1, 0, n - 1);
    mergeSort(A2, 0, n);

    if (isStable(A1, A2, n)) printf("Stable\n");
    else printf("Not stable\n");

    for (i = 0; i < n; i++) printf("%c %d\n", A1[i].suit, A1[i].value);

    return 0;
}