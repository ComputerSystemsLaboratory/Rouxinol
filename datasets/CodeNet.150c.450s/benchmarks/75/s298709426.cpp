#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void maxHeapify(vector<T> &A, int32_t i) {
    int32_t l = 2*i+1, r = 2*i+2, largest = i;
    if (l < A.size() && A[l] > A[largest]) largest = l;
    if (r < A.size() && A[r] > A[largest]) largest = r;

    if (largest != i) {
        swap(A[largest], A[i]);
        maxHeapify(A, largest);
    }

    return;
}

template<typename T>
void buildMaxHeap(vector<T> &A) {
    for (int32_t i = A.size() / 2; i >= 0; i--) {
        maxHeapify(A, i);
    }

    return;
}

int main() {
    int32_t H;
    cin >> H;

    vector<int32_t> heap(H);
    for (int32_t i = 0; i < H; i++) {
        cin >> heap[i];
    }

    buildMaxHeap(heap);

    for (int32_t i : heap) {
        cout << " " << i;
    }
    cout << endl;

    return 0;
}