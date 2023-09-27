#include <iostream>
using namespace std;

int n, A[500000];

void maxHeapify(int A[], int i) {
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int largest = i;
    if (l < n && A[l] > A[largest]) largest = l;
    if (r < n && A[r] > A[largest]) largest = r;

    if (largest != i){
        swap(A[i], A[largest]);
        maxHeapify(A, largest);
    }
}

void maxHeap(int A[]) {
    for (int i = (n - 1)/ 2; i >= 0; i--)
        maxHeapify(A, i);
}

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    maxHeap(A);

    for (int i = 0; i < n; i++) cout << " " << A[i];
    cout << endl;

    return 0;
}