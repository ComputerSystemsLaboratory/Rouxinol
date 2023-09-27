#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int left(int i) { return i * 2; }

int right(int i) { return i * 2 + 1; }

void max_heapify(vector<int>& heap, int index) {
    int left_idx = left(index);
    int right_idx = right(index);

    int max_idx = index;
    if (left_idx < heap.size() && heap[max_idx] < heap[left_idx])
        max_idx = left_idx;
    if (right_idx < heap.size() && heap[max_idx] < heap[right_idx])
        max_idx = right_idx;

    if (max_idx != index) {
        swap(heap[index], heap[max_idx]);
        max_heapify(heap, max_idx);
    }
}

void build_heap(vector<int>& heap) {
    for (int i = (heap.size() - 1) / 2; i > 0; --i)
        max_heapify(heap, i);
}

int main() {
    int n;
    cin >> n;

    vector<int> heap(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> heap[i];

    build_heap(heap);

    for (int i = 1; i <= n; ++i)
        cout << ' ' << heap[i];
    cout << '\n';
}

