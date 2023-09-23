#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int left(int i) { return (i + 1) * 2 - 1; }
int right(int i) { return (i + 1) * 2; }

void maxHeapify(int N, int A[], int i) {
    if (i >= N) {
        return;
    }
    int l = left(i);
    int r = right(i);
    int largest = i;
    if (l < N && A[l] > A[i]) {
        largest = l;
    }
    if (r < N && A[r] > A[largest]) {
        largest = r;
    }
    
    if (largest != i) {
        int temp = A[i];
        swap(A[i], A[largest]);
        maxHeapify(N, A, largest);
    }
}

void buildMaxHeap(int N, int A[]) {
    for (int i = N / 2; i >= 0; i--) {
        maxHeapify(N, A, i);
    }
}

int main() {
    int N, A[500000];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    buildMaxHeap(N, A);
    
    for (int i = 0; i < N; i++) {
        printf(" %d", A[i]);
    }
    
    cout << endl;

    return 0;
}

