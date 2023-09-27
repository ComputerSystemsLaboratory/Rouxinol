#include<iostream>

#define MAX 5000000

int H, A[MAX];

void maxHeapify(int i) {
    int lIdx, rIdx, largestIdx;
    largestIdx = i;
    lIdx = i * 2;
    rIdx = i * 2 + 1;
    if (lIdx <= H && A[lIdx] > A[largestIdx]) {
        largestIdx = lIdx;
    }
    if (rIdx <= H && A[rIdx] > A[largestIdx]) {
        largestIdx = rIdx;
    }
    if (largestIdx != i) {
        std::swap(A[i], A[largestIdx]);
        maxHeapify(largestIdx);
    }
}

void buildHeap() {
    for (int i = H / 2; i >= 1; i--) {
        maxHeapify(i);
    }
}

int main() {
    std::cin >> H;
    for (int i = 1; i <= H; i++) {
        std::cin >> A[i];
    }
    buildHeap();
    for (int i = 1; i <= H; i++) {
        std::cout << " " << A[i];
    }
    std::cout << std::endl;
    return 0;
}
