#include <stdio.h>

int A[500010];
int n;

void maxheapify(int i) {
    if (i > n) {
        return;
    }
    int left = i * 2, right = i * 2 + 1, largest = i;
    if (left <= n && A[left] > A[largest]) {
        largest = left;
    }
    if (right <= n && A[right] > A[largest]) {
        largest = right;
    }
    if (largest != i) {
        int t = A[i];
        A[i] = A[largest];
        A[largest] = t;
        maxheapify(largest);
    }
}

void buildHeap() {
    for (int i = n / 2; i >= 1; i--) {
        maxheapify(i);
    }
}

void buildHeap2() {
    for (int i = 2; i <= n; i++) {
        int j = i;
        while (j > 1 && A[j / 2] < A[j]) {
            int t = A[j / 2];
            A[j / 2] = A[j];
            A[j] = t;
            j /= 2;
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
    }
    buildHeap();
    for (int i = 1; i <= n; i++) {
        printf(" %d", A[i]);
    }
    printf("\n");
    return 0;
}

