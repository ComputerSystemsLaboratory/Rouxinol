#include <iostream>

using namespace std;

int n, heap[500001];

void maxHeapify(int i) {
    int l = i * 2;
    int r = i * 2 + 1;
    int maxi = i;
    if (l <= n && heap[l] > heap[maxi])
        maxi = l;
    if (r <= n && heap[r] > heap[maxi])
        maxi = r;
    if (maxi != i) {
        swap(heap[i], heap[maxi]);
        maxHeapify(maxi);
    }
}

void buildMaxHeap() {
    for (int i = n / 2; i >= 1; --i) {
        maxHeapify(i);
    }
}

int main() {
    int v;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> v;
        heap[i] = v;
    }
    buildMaxHeap();
    for (int i = 1; i <= n; ++i)
        cout << " " << heap[i];
    cout << endl;

    return 0;
}


