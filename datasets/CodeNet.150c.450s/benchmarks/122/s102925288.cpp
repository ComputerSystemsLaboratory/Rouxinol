/* ALDS1_9_C: Priority Queue */

#include <iostream>
#include <cstdio>

const int MAX_N_NODES = 2000000;

class PriorityQueue {
    int size;
    int *heap;
    void max_heapify(int heap[], int i);
    int parent(int i);
    int left(int i);
    int right(int i);
    public:
        PriorityQueue();
        ~PriorityQueue();
        void insert(int key);
        int extract_max();
};

PriorityQueue::PriorityQueue() {
    size = 0;
    heap = new int[ MAX_N_NODES + 1 ];
}

PriorityQueue::~PriorityQueue() {
    delete [] heap;
}

int PriorityQueue::parent(int i) {
    return i / 2;
}

int PriorityQueue::left(int i) {
    return i * 2;
}

int PriorityQueue::right(int i) {
    return i * 2 + 1;
}

void PriorityQueue::insert(int key) {
    size++;
    heap[size] = key;

    int i = size;
    while (1 < i && heap[parent(i)] < heap[i]) {
        std::swap(heap[parent(i)], heap[i]);
        i = parent(i);
    }
}

int PriorityQueue::extract_max() {
    int max = heap[1];
    heap[1] = heap[size];
    size--;
    max_heapify(heap, 1);

    return max;
}

void PriorityQueue::max_heapify(int heap[], int i) {
    int il = left(i);
    int ir = right(i);

    int max_i = i;
    if (il <= size && heap[i] < heap[il])
        max_i = il;
    if (ir <= size && heap[max_i] < heap[ir])
        max_i = ir;

    if (max_i != i) {
        std::swap(heap[i], heap[max_i]);
        max_heapify(heap, max_i);
    }
}

int main() {
    PriorityQueue pq;
    int key;
    char command[7];

    while(true) {
        scanf("%s", command);
        if (command[0] == 'i') { // insert
            scanf("%d", &key);
            pq.insert(key);
        }
        else if (command[1] == 'x') { // extract
            printf("%d\n", pq.extract_max());
        }
        else { break; }
    }
    return 0;
}