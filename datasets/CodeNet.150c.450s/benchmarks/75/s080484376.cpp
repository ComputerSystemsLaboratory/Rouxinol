#include <iostream>
using namespace std;

void maxHeapify(int* A, int i, int heapSize) {
    int l = 2*i, r = 2*i+1;
    int largest;
    if (l <= heapSize && A[l] > A[i]) {
        largest = l;
    } else {
        largest = i;
    }
    if (r <= heapSize && A[r] > A[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(A, largest, heapSize); //?????°??????????????????
    }
}

void buildMaxHeap(int* A, int heapSize) {
    for(int i = heapSize/2; i >= 1; --i) {
        maxHeapify(A, i, heapSize);
    }
}

int main() {
    int H, A[500001];
    cin >> H;
    for(int i = 1; i <= H; ++i) {
        cin >> A[i];
    }

    buildMaxHeap(A, H);

    for(int i = 1; i <= H; ++i) {
        cout << " " << A[i] << flush;
    }
    cout << endl;

    return 0;
}