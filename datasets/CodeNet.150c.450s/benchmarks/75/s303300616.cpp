#include <stdio.h>

int left(int i) { return i*2; }
int right(int i) { return i*2+1; }

int H;

void maxHeapify(int *A, int i) {
    int l = left(i);
    int r = right(i);
    int largest;
    
    if(l <= H && A[l] > A[i]) largest = l;
    else largest = i;
    if(r <= H && A[r] > A[largest]) largest = r;
    
    if(largest != i) {
        int tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        maxHeapify(A, largest);
    }
}

void buildMaxHeap(int *A) {
    for (int i=H/2; i>0; i--) {
        maxHeapify(A, i);
    }
}

int main() {
    scanf("%d", &H);
    int A[H*2+1];
    for (int i=0; i<=2*H; i++) A[i] = 0;
    for (int i=1; i<=H; i++) scanf("%d", &A[i]);
    
    buildMaxHeap(A);
    for (int i=1; i<=H; i++) printf(" %d", A[i]);
    printf("\n");
    
    return 0;
}
