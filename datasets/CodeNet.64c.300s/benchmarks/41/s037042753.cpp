#include <iostream>

static int H;

void maxHeapify(int *A, int i) {
    int left = i * 2;
    int right = left + 1;

	int largest = i;
    if (left <= H && A[left] > A[i]) {
        largest = left;
    }
    if (right <= H && A[right] > A[largest]) {
        largest = right;
    }

    if (largest != i) {
        std::swap(A[largest], A[i]);
        maxHeapify(A, largest);
    }
}

void buildMaxHeap(int *A) {
    for (auto i = H / 2; i > 0; i--) {
        maxHeapify(A, i);
    }
}

int main() {
    std::cin >> H;

    int A[H];
    for (int i = 1; i < H + 1; i++) {
        std::cin >> A[i];
    }
    
    buildMaxHeap(A);

    for (int i = 1; i < H + 1; i++) {
        std::cout << " " << A[i];
    }
    std::cout << std::endl;
}

