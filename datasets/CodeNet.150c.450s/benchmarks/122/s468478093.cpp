#include <iostream>
#include <cstdio>


constexpr int MAXN = 2000000;
int Heap[MAXN + 1];

int parent(int i) {return i / 2;}
int left(int i) {return i * 2;}
int right(int i) {return i * 2 + 1;}

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
int n;
int heapsize;

void ShowHeap(int* Heap) {
    FOR(i, 1, heapsize + 1) {
        std::printf("node %d: key = %d, ", i, Heap[i]);
        if (parent(i)) std::printf("parent key = %d, ", Heap[parent(i)]);
        if (left(i) <= heapsize) std::printf("left key = %d, ", Heap[left(i)]);
        if (right(i) <= heapsize) std::printf("right key = %d, ", Heap[right(i)]);
        std::cout << std::endl;
    }
}

void MaxHeapify(int* H, int i) {
    int l = left(i), r = right(i);
    int largest = i;
    if (l <= heapsize && H[largest] < H[l]) {
        largest = l;
    }
    if (r <= heapsize && H[largest] < H[r]) {
        largest = r;
    }
    if (largest != i) {
        std::swap(H[i], H[largest]);
        MaxHeapify(H, largest);
    }
}

void BuildHeap(int *H) {
    for (int i = heapsize / 2; i >0; --i) {
        MaxHeapify(H, i);
    }
}

void IncreaseKeyHeap(int *H, int i, int k) {
    H[i] = k;
    int p = parent(i);
    while (H[p] < H[i]) {
        if (!p) break;
        std::swap(H[p], H[i]);
        if (!parent(p)) break;
        i = p;
        p = parent(p);
    }
}

void InsertHeap(int *H, int k) {
    H[++heapsize] = 0;
    IncreaseKeyHeap(H, heapsize, k);
}

int ExtractHeapMax(int *H) {
    int max = H[1];
    H[1] = H[heapsize--];
    MaxHeapify(H, 1);
    return max;
}


int main() {
    heapsize = 0;

    while (true) {
        std::string ins;
        std::cin >> ins;
        if (ins == "insert") {
            int i;
            std::cin >> i;
            InsertHeap(Heap, i);
        }else if(ins == "extract"){
            std::cout << ExtractHeapMax(Heap) << std::endl;
        }else{
            break;
        };
    }
}
