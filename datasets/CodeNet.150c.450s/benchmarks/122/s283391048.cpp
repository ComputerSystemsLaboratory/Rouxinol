/* ALDS1_9_C: Priority Queue */

#include <iostream>
#include <string>

const int MAX_N_NODES = 2000000;

class PriorityQueue {
    int size;
    int *heap;
    void max_heapify(int heap[], int i);
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

void PriorityQueue::insert(int key) {
    size++;
    heap[size] = key;

    int i = size;
    int i_parent = i / 2;
    while (1 < i && heap[i_parent] < heap[i]) {
        std::swap(heap[i_parent], heap[i]);
        i = i_parent;
        i_parent = i / 2;
    }
}

int PriorityQueue::extract_max() {
    int max = heap[1];

    heap[1] = heap[size];
    max_heapify(heap, 1);
    size--;

    return max;
}

void PriorityQueue::max_heapify(int heap[], int i) {
    int il = i * 2;
    int ir = i * 2 + 1;

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
    std::ios::sync_with_stdio(false);

    PriorityQueue pq;
    int key;
    std::string command;

    while(true) {
        std::cin >> command;
        if (command == "insert") {
            std::cin >> key;
            pq.insert(key);
        }
        else if (command == "extract") {
            std::cout << pq.extract_max() << "\n";
        }
        else if (command == "end") {
            break;
        }
    }
    return 0;
}