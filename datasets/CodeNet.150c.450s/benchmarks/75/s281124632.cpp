#include <cstdio>

int h;

void maxHeapify(int A[], int i) {
        int l = i*2+1, r = i*2+2;
        int largest;
        if (l < h && A[l] > A[i]) {
                largest = l;
        } else {
                largest = i;
        }
        if (r < h && A[r] > A[largest]) {
                largest = r;
        }
        if (largest != i) {
                int tmp = A[i];
                A[i] = A[largest];
                A[largest] = tmp;
                maxHeapify(A, largest);
        }
}

void buildMaxHeap(int A[]) {
        for (int i = h/2; i >= 0; i--) {
                maxHeapify(A, i);
        }
}

int main() {
        const int H = 500000;
        int A[H];

        scanf("%d", &h);
        for (int i = 0; i < h; i++) {
                scanf("%d", &A[i]);
        }
        buildMaxHeap(A);
        for (int i = 0; i < h; i++) {
                printf(" %d", A[i]);
        }
        printf("\n");

        return 0;
}