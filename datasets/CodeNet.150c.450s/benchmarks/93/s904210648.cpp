#include <cstdio>
#include <utility>
#define SENTINEL 2000000000
using namespace std;

struct Card {
    char suit;
    int value;
};

Card *L, *R;

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
    return i+1;
}

void quickSort(Card A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q-1);
        quickSort(A, q+1, r);
    }
}

void merge(Card A[], int n, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;

    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1].value = R[n2].value = SENTINEL;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i].value < R[j].value) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
    }
}

void mergeSort(Card A[], int n, int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(A, n, left, mid);
        mergeSort(A, n, mid, right);
        merge(A, n, left, mid, right);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    L = new Card[int(n/2+1)];
    R = new Card[int((n+1)/2+1)];   
    
    Card A[n], B[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d", &A[i].suit, &A[i].value);
        B[i] = A[i];
    }

    quickSort(A, 0, n-1);
    mergeSort(B, n, 0, n);

    bool isStable = true;
    for (int i = 0; i < n; i++) {
        if (A[i].suit == B[i].suit) {
            isStable = false;
            printf("Not stable\n");
            break;
        }
    }
    if (isStable) printf("Stable\n");

    for (int i = 0; i < n; i++) {
        printf("%c %d\n", A[i].suit, A[i].value);
    }

    return 0;
}
