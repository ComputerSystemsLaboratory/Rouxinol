// ALDS1_9_B Maximum Heap
#include <iostream>
#include <algorithm>
#include <vector>
#define NIL -2000000000-1
bool debug = false;

std::vector<int> heap;

void MaxHeapify(int num) {
    int largest = num;
    int L_child = num*2, R_child = num*2+1;
    if (debug) std::cout << "L_child = " << L_child << ", " << "R_child = " << R_child << "\n";
    
    if (L_child <= heap.size()-1) {
        if (heap.at(largest) < heap.at(L_child)) {
            largest = L_child;
        }
    }
    if (R_child <= heap.size()-1) {
        if (heap.at(largest) < heap.at(R_child)) {
            largest = R_child;
        }     
    }
    if (debug) std::cout << "largest = " << largest << "\n";
    if (heap.at(largest) != heap.at(num)) {
        std::swap(heap.at(largest), heap.at(num));
        MaxHeapify(largest);
    }
}

void BuildMaxHeap() {
    /* If i > heap.size()/2, then heap.at(i) does not have any children. */
    for (int i=heap.size()/2; i>=1; i--) {
        if (debug) std::cout << "heap start point = " << i << "\n";
        MaxHeapify(i);
    }
}

int main() {
    int total; std::cin >> total;

    heap.resize(total+1);
    for (int i=1; i<heap.size(); i++) {
        std::cin >> heap.at(i);
    }
    if (debug) std::cout << "heap.size() = " << heap.size() << "\n";

    BuildMaxHeap();

    for (int i=1; i<heap.size(); i++) {
        std::cout << " " << heap.at(i);
    }
    std::cout << "\n";
}
