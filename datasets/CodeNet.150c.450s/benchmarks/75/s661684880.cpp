#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void maxHeapify(vector<int>& heap, int i)
{
    while (i <= (heap.size() - 1) / 2) {
        int largest = i;
        if (heap[largest] < heap[i * 2]) {
            largest = i * 2;
        }
        if (i * 2 + 1 < heap.size() && heap[largest] < heap[i * 2 + 1]) {
            largest = i * 2 + 1;
        }
        if (largest != i) {
            swap(heap[i], heap[largest]);
        } else {
            break;
        }
        i = largest;
    }
}

void buildHeap(vector<int>& heap)
{
    for (int i = heap.size() / 2; i >= 1; --i) {
        maxHeapify(heap, i);
    }
}

int main()
{
    // Input
    int n;
    cin >> n;
    vector<int> heap(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> heap[i];
    }

    // Solve
    buildHeap(heap);

    // Output
    for (int i = 1; i < heap.size(); ++i) {
        cout << " " << heap[i];
    }
    cout << endl;
    return 0;
}
