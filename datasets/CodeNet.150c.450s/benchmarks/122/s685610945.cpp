#include <iostream>
#include <limits>

constexpr int MAX_HEAP_SIZE = 2000000;
int H[MAX_HEAP_SIZE + 1];
int heap_size = 0;

int parent(int i) {return i / 2;};
int left(int i) {return i * 2;};
int right(int i) {return i * 2 + 1;};

void MaxHeapify(int* H, int i) {
    int l = left(i);
    int r = right(i);
    int largest;
    if ((l <= heap_size) && (H[l] > H[i])) {
        largest = l;
    }else{
        largest = i;
    }
    if ((r <= heap_size) && (H[r] > H[largest])) {
        largest = r;
    }

    if (largest != i) {
        std::swap(H[i], H[largest]);
        MaxHeapify(H, largest);
    }
}

void IncreaseHeapKey(int *H, int tgt, int key) {
    if (H[tgt] > key) {
        std::cerr << "Setting key should be higher." << std::endl;
        exit(-1);
    }
    H[tgt] = key;
    while ((tgt > 1) && (H[parent(tgt)] < H[tgt]) ) {
        std::swap(H[parent(tgt)], H[tgt]);
        tgt = parent(tgt);
    }
}
void Insert(int *H, int key) {
    heap_size++;
    H[heap_size] = std::numeric_limits<int>::min();
    IncreaseHeapKey(H, heap_size, key);
}

int ExtractMax(int *H) {
    if (heap_size < 1) {
        std::cerr << "Heap under flow" << std::endl;
        exit(-1);
    }
    int max = H[1];
    H[1] = H[heap_size];
    heap_size--;
    MaxHeapify(H, 1);
    return max;
}


void BuildMaxHeap(int *H) {
    for (int i = heap_size / 2; i > 0; i--) {
        MaxHeapify(H, i);
    }
}

int main() {
    while (true) {
        std::string str;
        std::cin >> str;
        if (str == "extract") {
            std::cout << ExtractMax(H) << std::endl;
            continue;
        }
        if (str == "insert") {
            int k;
            std::cin >> k;
            Insert(H, k);
            continue;
        }
        break;
    }
    return 0;
}
