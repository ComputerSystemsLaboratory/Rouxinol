#include <iostream>
#include <cstdio>


constexpr int MAXN = 250;
int Heap[MAXN + 1];

int parent(int i) {return i / 2;}
int left(int i) {return i * 2;}
int right(int i) {return i * 2 + 1;}

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
int n;

void ShowHeap(int* Heap) {
    FOR(i, 1, n + 1) {
        std::printf("node %d: key = %d, ", i, Heap[i]);
        if (parent(i)) std::printf("parent key = %d, ", Heap[parent(i)]);
        if (left(i) <= n) std::printf("left key = %d, ", Heap[left(i)]);
        if (right(i) <= n) std::printf("right key = %d, ", Heap[right(i)]);
        std::cout << std::endl;
    }
}


int main() {
    std::cin >> n;
    FOR(i, 0, n) std::cin >> Heap[i + 1];
    ShowHeap(Heap);
}
