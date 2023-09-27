#include <iostream>

using namespace std;

int H;

int heap[500001];

void MaxHeapify(int index) {
    int left = index * 2;
    int right = index * 2 + 1;
    int largest;

    if (left <= H && heap[left] > heap[index]) {
        largest = left;
    } else {
        largest = index;
    }

    if (right <= H && heap[right] > heap[largest]) {
        largest = right;
    }

    if (index != largest) {
        swap(heap[index], heap[largest]);
        MaxHeapify(largest);
    }
}

int main() {

    cin >> H;
    for (int i = 1; i <= H; ++i) {
        int x;
        cin >> x;
        heap[i] = x;
    }

    for (int i = H / 2; i >= 1; --i) {
        MaxHeapify(i);
    }

    for (int i = 1; i <= H; ++i) {
        cout << " " << heap[i];
    }
    
    cout << endl;
    
    return 0;
}
