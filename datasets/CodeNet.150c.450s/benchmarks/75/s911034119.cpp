#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int H;
int heap[500000];

inline void max_heapify(int node) {
    int left = node * 2 + 1, right = node * 2 + 2, largest = node;
    if (left < H && heap[left] > heap[node]) {
        largest = left;
    }
    else {
        largest = node;
    }
    if (right < H && heap[right] > heap[largest]) {
        largest = right;
    }
    if (largest != node) {
        int tmp = heap[node];
        heap[node] = heap[largest];
        heap[largest] = tmp;
        max_heapify(largest);
    }
}

inline void build_max_heap() {
    for (int i = (H) / 2; i >= 0; --i) {
        max_heapify(i);
    }
}

int main(void) {

    cin >> H;

    for (int i = 0; i < H; ++i) {
        scanf("%d", heap + i);
    }

    build_max_heap();

    for (int i = 0; i < H; ++i) {
        printf(" %d", heap[i]);
    }
    printf("\n");

    return 0;
}